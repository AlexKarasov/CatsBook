#include <iostream>


int main()
{  
	double v1;
	std::cout << "Input the value of volume V1: " << std::endl;
	std::cin >> v1;

	double t1;
	std::cout << "Input the value of temperature t1: " << std::endl;
	std::cin >> t1;

	double v2;
	std::cout << "Input the value of volume V2: " << std::endl;
	std::cin >> v2;

	double t2;
	std::cout << "Input the value of temperature t2: " << std::endl;
	std::cin >> t2;

	double v3 = v1 + v2;
	std::cout << "The volume of V3: " << v3 << std::endl;

	double t3 = (v1*t1+v2*t2)/ v3;
	std::cout << "The temperature of t3: " << t3 << std::endl;

	return 0;
}

