#include <iostream>
#include <string>

using namespace std;


int main()
{


	//input phase

	float quant, total, cpu;
	int part;

	cout << "Enter the quantity: ";
	cin >> quant;
	cout << endl << "Enter the part number: ";
	cin >> part;

	//process phase


	if (quant > 1000 && part == 10)
	{
		cpu = 1.00;
	}
	else if (quant > 500 && part == 99)
	{
		cpu = 2.00;
	}
	else
	{
		cpu = 5.00;
	}

	total = quant * cpu;

	//output phase

	cout << "Part number: " << part << endl << "Cost per unit: " << cpu << endl << "Total: " << total;


}