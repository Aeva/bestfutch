
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
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
while (Cursor != 0)
{
MoveRight();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
MoveLeft();
Decrement();
}
MoveRight();
WriteOut();
MoveRight();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
while (Cursor != 0)
{
MoveRight();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
MoveLeft();
Decrement();
}
MoveRight();
Increment();
WriteOut();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
WriteOut();
WriteOut();
Increment();
Increment();
Increment();
WriteOut();
MoveRight();
Increment();
Increment();
Increment();
Increment();
while (Cursor != 0)
{
MoveRight();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
Increment();
MoveLeft();
Decrement();
}
MoveRight();
WriteOut();
MoveLeft();
Increment();
Increment();
Increment();
while (Cursor != 0)
{
MoveRight();
Decrement();
Decrement();
Decrement();
Decrement();
MoveLeft();
Decrement();
}
MoveRight();
WriteOut();
MoveLeft();
MoveLeft();
MoveLeft();
MoveLeft();
MoveLeft();
Increment();
Increment();
Increment();
while (Cursor != 0)
{
MoveRight();
Increment();
Increment();
Increment();
Increment();
Increment();
MoveLeft();
Decrement();
}
MoveRight();
WriteOut();
MoveRight();
MoveRight();
WriteOut();
Increment();
Increment();
Increment();
WriteOut();
Decrement();
Decrement();
Decrement();
Decrement();
Decrement();
Decrement();
WriteOut();
Decrement();
Decrement();
Decrement();
Decrement();
Decrement();
Decrement();
Decrement();
Decrement();
WriteOut();
MoveRight();
MoveRight();
Increment();
WriteOut();
}
