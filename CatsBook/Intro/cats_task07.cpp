#include <iostream>



int main()
{  
	std::cout << "Input the value of a" << std::endl;
	int a4;
	std::cin >> a4;

	a4 = a4 * a4;
	a4 = a4 * a4;

	std::cout << "The value of a = " << a4 << std::endl;

	std::cout << "Input the value of a" << std::endl;
	int a6;
	std::cin >> a6;

	a6 = a6 * a6;
	a6 = a6 * a6 * a6;

	std::cout << "The value of a = " << a6 << std::endl;

	std::cout << "Input the value of a" << std::endl;
	int a7;
	std::cin >> a7;

    int b7 = a7 * a7;
	int c7 = b7 * b7;
	b7 = c7 * b7;
	a7 = a7 * b7;

	std::cout << "The value of a = " << a7 << std::endl;

	std::cout << "Input the value of a" << std::endl;
	int a8;
	std::cin >> a8;

	int b8 = a8 * a8;

	    a8 = b8 * b8;

    int c8 = a8 * a8;

	std::cout << "The value of a = " << c8 << std::endl;

	std::cout << "Input the value of a" << std::endl;
	int a9;
	std::cin >> a9;

	int b9 = a9 * a9;

	int c9 = b9 * b9;

	int d9 = c9 * c9;

	a9 = a9 * d9;

	std::cout << "The value of a = " << a9 << std::endl;

	std::cout << "Input the value of a" << std::endl;
	int a10;
	std::cin >> a10;

	int b10 = a10 * a10;
	int c10 = b10 * b10;
	int d10 = c10 * c10;
	a10 = d10 * b10;

	std::cout << "The value of a = " << a10 << std::endl;

	std::cout << "Input the value of a" << std::endl;
	int a13;
	std::cin >> a13;

	int b13 = a13 * a13;
	int c13 = b13 * b13;
	int d13 = c13 * c13;
	int e13 = d13 * c13;
	a13 = e13 * a13;

	std::cout << "The value of a = " << a13 << std::endl;

	std::cout << "Input the value of a" << std::endl;
	int a15;
	std::cin >> a15;

	int b15 = a15 * a15;
	int c15 = b15 * a15;
	int d15 = c15 * c15;
	int e15 = d15 * d15;
	a15 = e15 * c15;

	std::cout << "The value of a = " << a15 << std::endl;

	std::cout << "Input the value of a" << std::endl;
	int a21;
	std::cin >> a21;

	int b21 = a21 * a21;
	int c21 = b21 * b21;
	int d21 = c21 * c21;
	int e21 = d21 * d21;
	int f21 = e21 * c21;
	a21 = f21 * a21;

	std::cout << "The value of a = " << a21 << std::endl;

	std::cout << "Input the value of a" << std::endl;
	int a28;
	std::cin >> a28;

	int b28 = a28 * a28;
	int c28 = b28 * b28;
	int d28 = c28 * c28;
	int e28 = d28 * d28;
	int f28 = e28 * c28;
	a28 = f28 * d28;

	std::cout << "The value of a = " << a28 << std::endl;

	std::cout << "Input the value of a" << std::endl;
	long long a64;
	std::cin >> a64;

	long long b64 = a64 * a64;
	long long c64 = b64 * b64;
	long long d64 = c64 * c64;
	long long e64 = d64 * d64;
	long long f64 = e64 * e64;
	unsigned long long end64 = f64 * f64;  //18,446,744,073,709,551,616

	std::cout << "The value of a = " << end64 - 1 << std::endl;

	return 0;
}


