#include <iostream>
#include <cmath>

int main()
{  
	std::cout << "Perimeter and area calculation using coordinates of vertexes" << std::endl;

	std::cout << "Input the coordinates of the first vertex: " << std::endl;

	std::cout << "x1 " << std::endl;

	int x1;

	std::cin >> x1;

	std::cout << "y1 " << std::endl;

	int y1;

	std::cin >> y1;

	std::cout << "Input the coordinates of the second vertex: " << std::endl;

	std::cout << "x2 " << std::endl;

	int x2;

	std::cin >> x2;

	std::cout << "y2 " << std::endl;

	int y2;

	std::cin >> y2;

	std::cout << "Input the coordinates of the third vertex: " << std::endl;

	std::cout << "x3 " << std::endl;

	int x3;

	std::cin >> x3;

	std::cout << "y3 " << std::endl;

	int y3;

	std::cin >> y3;

	int vectorFirstSecondX = x2 - x1;
	int vectorFirstSecondY = y2 - y1;

	int vectorFirstThirdX = x3 - x1;
	int vectorFirstThirdY = y3 - y1;

	int vectorSecondThirdX = x3 - x2;
	int vectorSecondThirdY = y3 - y2;

	double distanceFirstSecond = sqrt(pow(vectorFirstSecondX,2) + pow(vectorFirstSecondY, 2));

	double distanceFirstThird = sqrt(pow(vectorFirstThirdX, 2) + pow(vectorFirstThirdY, 2));

	double distanceSecondThird = sqrt(pow(vectorSecondThirdX, 2) + pow(vectorSecondThirdY, 2));

	double perimeter = distanceFirstSecond + distanceFirstThird + distanceSecondThird;

	double halfPerimeter = perimeter / 2;

	double areaHeronFormula = sqrt(halfPerimeter * (halfPerimeter - distanceFirstSecond) * (halfPerimeter - distanceFirstThird) * (halfPerimeter - distanceSecondThird));

	std::cout << "Perimeter: " << perimeter<<std::endl;

	std::cout << "Area: " << areaHeronFormula << std::endl;

	return 0;
}
