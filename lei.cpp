#include <iostream>
using namespace std;

int main ()
{
	double SugarPriceUSD,ricePricePound,sardinesPricePound,CoffeePriceUsd,milkPriceUSD;
	int sugarQty,riceQty,sardinesQty,coffeeQty,milkQty, totalpricesugar, totalpriceCoffee, totalpriceMilk;
	double ratesUSD = 0.0, ratesPounds = 0.0;
	cout << "Conversion of USD to PHP: ";
	cin >> ratesUSD;
	cout << "Conversion of POUNDS to PHP: ";
	cin >> ratesPounds;
	cout << "Quantity of sugar: ";
	cin >> sugarQty;
	cout << "Enter cost of Sugar in USD: ";
	cin >>  SugarPriceUSD;
	cout << "Quantity of rice: ";
	cin >> riceQty;
	cout << "Enter cost of rice in Pounds: ";
	cin >> ricePricePound;
	cout << "Quantity of sardines: ";
	cin >> sardinesQty;
	cout << "Enter cost of sardines in Pounds: ";
	cin >> sardinesPricePound;
	cout << "Quantity of coffee: ";
	cin >> coffeeQty;
	cout << "Enter cost of coffee in USD: ";
	cin >> CoffeePriceUsd;
	cout << "Quantity of milk: ";
	cin >> milkQty;
	cout << "Enter the cost of milk in USD: ";
	cin >> milkPriceUSD;
	double sugarPhp = (SugarPriceUSD * sugarQty) * ratesUSD;
	double ricePhp = (ricePricePound * riceQty) * ratesPounds;
	double sardines = (sardinesPricePound * sardinesQty) * ratesPounds;
	double coffeePhp = ( CoffeePriceUsd * coffeeQty) * ratesUSD;
	double milkPhp = (milkPriceUSD * milkQty) * ratesUSD;
	double totalcostPhp = sugarPhp + ricePhp + sardines + coffeePhp + milkPhp;
	cout << "\n PURCHASE DETAILS\n";
	cout << "----------------------------------------------------------------\n";
	cout << "ITEM:\t\tQUANTITY:\t\tTOTALCOST:\n";
	cout << "Sugar:\t\t " << sugarQty << "			" << sugarPhp << endl;
	cout << "Rice:\t\t " << riceQty << "			" << ricePhp << endl;
	cout << "Sardines:\t " << sardinesQty << "			" << sardines << endl;
	cout << "Coffee:\t\t " << coffeeQty << "			" << coffeePhp << endl;
	cout << "Milk:\t\t " << milkQty << "			" << milkPhp << endl;
	cout << "----------------------------------------------------------------\n";
	cout << "the total amount to be paid in PHP : " << totalcostPhp;
	
	return 0;
}
