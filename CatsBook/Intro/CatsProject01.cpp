#include <iostream>

int main()
{
	std::cout << "Input values for a, b, c, d, please: " << '\n';

    double a;
	std::cin >> a;

	double b;
	std::cin >> b;

	double c;
	std::cin >> c;

	double d;
	std::cin >> d;

	double halfSum = (a + b + c + d) / 2;
	
	std::cout << "The half-sum of inputted values: " << halfSum << '\n';

	double halfDifference = (a - b - c - d) / 2;

	std::cout << "The half-difference of inputted values: " << halfDifference << '\n';

	double maxValue = 0;

	if (a > b) {
		maxValue = a;
	}
	else {
		maxValue = b;
	}
	if (maxValue < c) {
		maxValue = c;
	}
	if (maxValue < d) {
		maxValue = d;
	}

	std::cout << "Max value is: " << maxValue << '\n';

	double minValue = 0;

	if (a < b) {
		minValue = a;
	}
	else {
		minValue = b;
	}
	if (minValue > c) {
		minValue = c;
	}
	if (minValue > d) {
		minValue = d;
	}

	std::cout << "Min value is: " << minValue << '\n';

	double productOfMaxAndMin = maxValue * minValue;

	std::cout << "The product of max and min value: " <<productOfMaxAndMin<< '\n';

	return 0;
}




