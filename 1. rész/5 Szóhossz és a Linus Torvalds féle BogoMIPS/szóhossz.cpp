#include <stdio.h>
#include <iostream>

int main()
{
	int a;
	std::cout << "Write me one integer for the black magic: \n";

	std::cin >> a;
	int x=0;

		while (a!=0)
		{ a<<=1;
		  x++;

		}
	std::cout << x << "\n";
}
