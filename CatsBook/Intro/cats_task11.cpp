#include <iostream>
#include <cmath>

int main()
{  
	std::cout << "Perimeter and area calculation of right triangle\n" << std::endl;

	std::cout << "Input the value of cathetus a: " << std::endl;
	double aLeg;
	std::cin >> aLeg;

	std::cout << "Input the value of cathetus b: " << std::endl;
	double bLeg;
	std::cin >> bLeg;

	double hypotenuse = sqrt(pow(aLeg, 2) + pow(bLeg, 2));

	double perimeter = hypotenuse + aLeg + bLeg;

	std::cout << "The perimeter of right triangle: " << perimeter << std::endl;

	const double oneHalf = 0.5;

	double area = oneHalf * aLeg * bLeg;

	std::cout << "The area of right triangle: " << area << std::endl;

	return 0;
}
