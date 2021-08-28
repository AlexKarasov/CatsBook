#include <iostream>
#include <string>

int main()
{  
	nextTry:

	std::cout << "Input number of UAH for converting: " << std::endl;

	double uah;
	std::cin >> uah;

	std::cin.ignore();

	std::cout << "Input the name of desirable currency: USD, GBP, EUR, RUB " << std::endl;

	std::string currency;

	std::getline(std::cin, currency);
	
	std::string usdName = "USD";

	std::string gbpName = "GBP";

	std::string euroName = "EUR";

	std::string rubName = "RUB";

	double usdOfficialExchangeRates = 26.93;

	if (currency == usdName) {
		double uahUsdExchange = uah / usdOfficialExchangeRates;
		std::cout << uah << " UAH" << " is " << uahUsdExchange << " USD" << std::endl;
	}

	double gbpOfficialExchangeRates = 36.96;

	if (currency == gbpName) {
		double uahGbpExchange = uah / gbpOfficialExchangeRates;
		std::cout << uah << " UAH" << " is " << uahGbpExchange << " GBP" << std::endl;
	}

	double eurOfficialExchangeRates = 31.66;

	if (currency == euroName) {
		double uahEurExchange = uah / eurOfficialExchangeRates;
		std::cout << uah << " UAH" << " is " << uahEurExchange << " EUR" << std::endl;
	}

	double rubOfficialExchangeRates = 0.3638;

	if (currency == rubName) {
		double uahRubExchange = uah / rubOfficialExchangeRates;
		std::cout << uah << " UAH" << " is " << uahRubExchange << " RUB" << std::endl;
	}

	std::cout << "Want to continue?" << std::endl;
	std::string continueWork;
	std::cin >> continueWork;

	if (continueWork == "Yes" || continueWork == "yes") {
		goto nextTry;
	}

	return 0;
  
}

