#include <iostream>
#include <cmath>

int main()
{  
	std::cout << "Input the coordinates of A and B point using one-dimension.\n" << std::endl;

	std::cout << "Input the coordinate of A point:\n";
	double a;
	std::cin >> a;

	std::cout << "Input the coordinate of B point:\n";
	double b;
	std::cin >> b;

	double distanceOneDimension = fabs(a - b);

	std::cout << "The distance between point A and B: " << distanceOneDimension << std::endl;

	std::cout << "Input the coordinates of A and B point using two-dimension coordinates.\n" << std::endl;

	std::cout << "Input the coordinates of A point:\n";
	double xa;
	std::cout << "Input the x coordinate of A point:\n";
	std::cin >> xa;
	double ya;
	std::cout << "Input the y coordinate of A point:\n";
	std::cin >> ya;

	std::cout << "Input the coordinates of B point:\n";
	double xb;
	std::cout << "Input the x coordinate of B point:\n";
	std::cin >> xb;
	double yb;
	std::cout << "Input the y coordinate of B point:\n";
	std::cin >> yb;

	double distanceTwoDimension = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));

	std::cout << "The distance between point A and B: " << distanceTwoDimension << std::endl;

	std::cout << "Input the coordinates of A and B point using three-dimension coordinates.\n" << std::endl;

	std::cout << "Input the coordinates of A point:\n";
	double xa3;
	std::cout << "Input the x coordinate of A point:\n";
	std::cin >> xa3;
	double ya3;
	std::cout << "Input the y coordinate of A point:\n";
	std::cin >> ya3;

	double za3;
	std::cout << "Input the z coordinate of A point:\n";
	std::cin >> za3;

	std::cout << "Input the coordinates of B point:\n";
	double xb3;
	std::cout << "Input the x coordinate of B point:\n";
	std::cin >> xb3;
	double yb3;
	std::cout << "Input the y coordinate of B point:\n";
	std::cin >> yb3;
	double zb3;
	std::cout << "Input the z coordinate of B point:\n";
	std::cin >> zb3;

	double distanceThreeDimension = sqrt(pow((xb3 - xa3), 2) + pow((yb3 - ya3), 2) + pow((zb3 - za3), 2));

	std::cout << "The distance between point A and B: " << distanceThreeDimension << std::endl;

	return 0;
}


