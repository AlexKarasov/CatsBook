#include <iostream>

int main()
{  
	double x;

	std::cout << "Input the value of x: " << std::endl;

	std::cin >> x;

	double firstExpression = x * (x * (-4 * x + 3) - 2) + 1;

	std::cout << firstExpression << std::endl;

	double secondExpression = x * (x * (4 * x + 3) + 2) + 1;

	std::cout << secondExpression << std::endl;

	return 0;
}

