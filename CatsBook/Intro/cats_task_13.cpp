#include <iostream>

int main()
{
    //Calculate the circumference and area of a circle of the same given radius R

    std::cout << "Calculation of the circumference and area of a circle with given radius R" << std::endl;
    std::cout << "Input the radius R, please " << std::endl;
    double radius;
    std::cin >> radius;

    const double radiusToDiameter = 2;
    const double PI = 3.14;

    double circumference = radiusToDiameter * PI * radius; // l = 2*Pi*r - circumference
    double area = PI * radius * radius; // Pi*r^2 - area 

    std::cout << "Circumference: " << circumference <<'\n'<< "Area: " << area << std::endl;

    return 0;
}
