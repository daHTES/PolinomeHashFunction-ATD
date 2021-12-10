#include <iostream>
#include <math.h>
#include "Poly.h"

const int MAX = 100, p = 10;

int main() 
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Binomial coeeficient " << std::endl;
	Poly<int> x(1, 1), one(1, 0), t = x + one, y = t;
	for (int  i = 0; i < MAX; i++)
	{
		y = y * t;
		std:: cout << y << std::endl;
	}
	std::cout << y.eval(p) << std::endl;
	return 0;
}