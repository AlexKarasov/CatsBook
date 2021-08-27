#include <iostream>


int main()
{  

	std::cout << "Input value of x, please " << '\n';
	double x;
	std::cin >> x;

	// Horner's method 

	double firstExpression = -1 + x * (-8 + x * x * (2 + 5 * x));

	std::cout << firstExpression << '\n';

	double secondExpression = 6 + (x * (-5 + x * x * (2 * x - 3 + 4 * x)));

	std::cout << secondExpression << '\n';

	return 0;
}

