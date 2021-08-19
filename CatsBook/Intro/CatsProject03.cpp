#include <iostream>


int main()
{   
	std::cout << "Input value of x, please " << '\n';
	double x;
	std::cin >> x;

	double firstExpression = 5 * x * x * x * x + 2 * x * x * x - 8 * x - 1;
	
	std::cout << firstExpression << '\n';
	
	double secondExpression = 2 * x * x * x * x - 3 * x * x * x + 4 * x * x * x * x - 5 * x + 6;
	
	std::cout << secondExpression << '\n';


	return 0;
}
