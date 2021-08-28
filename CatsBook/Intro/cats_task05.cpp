#include <iostream>

int main()
{  

	float a;
	float b;

	std::cout << "Input the value of a and b: " << std::endl;
	std::cin >> a >> b;

	// swap using additional variable

	float c;
	c = a;
	a = b;
	b = c;

	std::cout << "a = " << a << "\t b = " << b << std::endl;

	return 0;
}
