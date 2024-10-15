#include <iostream>
using namespace std;

int main ()
{
	float SugarPriceUSD,ricePricePound,sardinesPricePound,CoffeePriceUsd,milkPriceUSD;
	int sugarQty,riceQty,sardinesQty,coffeeQty,milkQty, totalpricesugar, totalpriceCoffee, totalpriceMilk;
	float usdToPhp, poundToPhp, totalCostPhp, ratesUSD = 0.0, ratesPounds = 0.0;
	int sugarPriceUsd, coffeePriceUsd, milkPriceUsd, sugarPhp, coffeePhp, milkPhp;
	float sugarCost, riceCost, sardinesCost, coffeeCost, milkCost;
	
	cout << "Quantity of sugar: \n";
	cin >> sugarQty; 
	cout << "Quantity of rice: \n";
	cin >> riceQty;
	cout << "Quantity of sardines: \n";
	cin >> sardinesQty;
	cout << "Quantity of coffee: \n";
	cin >> coffeeQty;
	cout << "Quantity of milk: \n";
	cin >> milkQty;
	cout << "Enter Cost of Sugar";
	cin >> sugarCost;
	cout << "Enter Cost of rice";
	cin >> riceCost;
	cout << "Enter Cost of sardines";
	cin >> sardinesCost;
	cout << "Enter Cost of coffeeCost";
	cin >> coffeCost;
	cout << "Enter Cost of milk";
	cin >> milkCost;
	cout << "Enter rates of USD";
	cin >> ratesUSD;
	cout << "Enter rates of Pounds"
	cin >> ratesPounds;
	
	sugarPriceUsd = sugarQty * sugarCost;
	ricePricePound = riceQty * riceCost;
	sardinesPricePound = sardinesQty * sardinesCost;
	coffeePriceUsd = coffeeQty * coffeeCost;
	milkPriceUSD = milkQty * milkCost;
	
	sugarPhp = sugarPriceUsd * rates;
	ricePhp = ricePricePound  * rates;
	sardines = sardinesPricePound * rates;
	coffeePhp = coffeePriceUsd * rates;
	milkPhp = milkPriceUSD * rates;
	
	totalcostPhp = SugarPhp + rice
	
	
	
	
	
	
	
	 
	
	
	
	
	
	
	return 0;
}
