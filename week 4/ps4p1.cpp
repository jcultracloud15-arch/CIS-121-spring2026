#include<iostream>
#include<string>

using namespace std;

int main()
{
	//input /var phase
	float quant, uprice, exprice, tax, total;
	cout << "Enter the amount of the item: ";
	cin >> quant;

	cout << endl;

	//process phase

	if (quant < 1000)
	{
		uprice = 5.00;
	}
	else
	{
		uprice = 3.00;
	}

	exprice = quant * uprice; 

	tax = exprice * 0.07;

	total = exprice + tax;

	//output  phase

	cout << "The quantity is: " << quant << endl;

	cout << "The unit price is: " << uprice << endl;

	cout << "The extended price is: " << exprice << endl;

	cout << "The tax is: " << tax << endl;

	cout << "The total price is: " << total << endl;


}