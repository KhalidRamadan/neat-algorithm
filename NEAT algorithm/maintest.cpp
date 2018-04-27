#include<iostream>
#include "neat.hpp"


int main()
{
	int TT = 0;
	int FF = 0;
	for (int i = 0; i < 100; i++)
	{
		int x = NEAT::RandomRange(0, 10);
		std::cout << x << "  ";
	}
	system("PAUSE");
	return 0;
}