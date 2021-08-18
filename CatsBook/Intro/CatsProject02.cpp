#include <iostream>
#include <cmath>

int main()
{  
   
	std::cout << "Input a,b and n for increasing sequence, please: " << '\n';

    double a_rising;
	std::cin >> a_rising;

	double b_rising;
	std::cin >> b_rising;

	double n_rising;
	std::cin >> n_rising;

	double a_n_rising = a_rising + (n_rising - 1) * b_rising;

	double res_rising = (a_rising + a_n_rising) * n_rising / 2;
	
	std::cout << "a-nth element of sequence: " <<a_n_rising<<';' << " The sum of sequence: " << res_rising << '.' << '\n';

	std::cout << "Input a,b and n for falling sequence, please: " << '\n';

	double a_falling;
	std::cin >> a_falling;

	double b_falling;
	std::cin >> b_falling;

	double n_falling;
	std::cin >> n_falling;

	double a_n_falling = a_falling - (n_falling - 1) * b_falling;

	double res_falling = (a_falling + a_n_falling) * n_falling / 2;

	std::cout << "a-nth element of sequence: " << a_n_falling << ';' << " The sum of sequence: " << res_falling << '.' << '\n';

	std::cout << "Input a,b and n for increasing geometric sequence, please: " << '\n';

	double a_g_rising;
	std::cin >> a_g_rising;

	double b_g_rising;
	std::cin >> b_g_rising;

	double n_g_rising;
	std::cin >> n_g_rising;

	double a_n_g_rising = a_g_rising * pow(b_g_rising, n_g_rising - 1);

	double res_g_rising = (a_n_g_rising * b_g_rising - a_g_rising) / (b_g_rising - 1);

	std::cout << "a-nth element of sequence: " << a_n_g_rising << ';' << " The sum of sequence: " << res_g_rising << '.' << '\n';
	
	std::cout << "Input a, b!=0 and n for decreasing geometric sequence, please: " << '\n';

	double a_g_dec;
	std::cin >> a_g_dec;

	double b_g_dec;
	std::cin >> b_g_dec;
	if (b_g_dec == 0) {
		std::cout << "Error! Can not divide by zero!" << '/n';
		return 1;
	}

	double n_g_dec;
	std::cin >> n_g_dec;

	double a_n_g_dec = a_g_dec / pow(b_g_dec, n_g_dec - 1);

	double res_g_dec = (1 - pow(1 / b_g_dec, n_g_dec)) / (1 - 1 / b_g_dec) * a_g_dec;
	
	std::cout << "a-nth element of sequence: " << a_n_g_dec << ';' << " The sum of sequence: " << res_g_dec << '.' << '\n';

	return 0;
}




/*
	/\
   /  \
  /____\
  |    |
  |    |
  |____|



*/
