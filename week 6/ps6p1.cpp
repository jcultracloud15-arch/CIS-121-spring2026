#include <iostream>
#include <string>

using namespace std;


int main()
{


	//input phase

	float quant, price, total, tax, exprice;
	char status;


	cout << "Enter the quantity of widgets: ";
	cin >> quant; 
	cout << endl << "Enter your status: ";
	cin >> status;

	//process phase

	if (quant > 10000 && status == 'A')
	{

		price = 10;
	}
	else if (quant > 10000 && status == 'B')
	{
		price = 12;
	}
	else if (quant >= 5000 && status == 'C')
	{
		price = 20;
	}
	else if (quant >= 5000 && status == 'D')
	{
		price = 22;
	}
	else
	{
		price = 30;
	}

	tax = 0.07;

	exprice = price * quant;

	total = exprice / tax;


	//output phase 


	cout << "The price is: " << exprice << endl << "The tax was: 7%" << endl << "The total is: " << total;



}