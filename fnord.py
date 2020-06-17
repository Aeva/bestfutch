
import parsley


def render(program):
    with open("template.cpp", "r") as file:
        template = file.read()
    with open("generated.cpp", "w") as file:
        file.write(template.replace("THIS_SPACE_INTENTIONALLY_LEFT_BLANK", program))


parse = parsley.makeGrammar("""
inc = '+' -> 'Increment();'
dec = '-' -> 'Decrement();'
left = '<' -> 'MoveLeft();'
right = '>' -> 'MoveRight();'
read = ',' -> 'ReadIn();'
write = '.' -> 'WriteOut();'
ops = (inc | dec | left | right | read | write | loop)
unroll = ops:car ops*:cdr -> [car] + cdr
loop = '[' unroll:inner ']' -> ['while (Cursor != 0)', '{'] + inner + ['}']
""", {})


valid_chars = "[]<>+-.,"


def flatten(tokens):
    if type(tokens) is list:
        return "\n".join([flatten(token) for token in tokens])
    else:
        return str(tokens)


if __name__ == "__main__":
    with open("hail_eris.bf", "r") as file:
        source = "".join([char for char in file.read() if char in valid_chars])
    render(flatten(parse(source).unroll()))
