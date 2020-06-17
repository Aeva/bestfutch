
#include <vector>
#include <iostream>

std::vector<char> Left;
std::vector<char> Right;
char Cursor = 0;

void Move(std::vector<char>& Away, std::vector<char>& Towards)
{
	Away.push_back(Cursor);
	if (Towards.size() > 0)
	{
		Cursor = Towards.back();
		Towards.pop_back();
	}
	else
	{
		Cursor = 0;
	}
}

void MoveLeft()
{
	Move(Right, Left);
}

void MoveRight()
{
	Move(Left, Right);
}

void Increment()
{
	Cursor++;
}

void Decrement()
{
	Cursor--;
}

void WriteOut()
{
	std::cout << Cursor;
}

void ReadIn()
{
	std::cin >> Cursor;
}

int main()
{
THIS_SPACE_INTENTIONALLY_LEFT_BLANK
}
