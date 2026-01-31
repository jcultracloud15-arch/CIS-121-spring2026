#include<iostream>
#include<String>

using namespace std;

int main()
{
	//var / input phase
	int quant, uprice;
	int total;

	cout << "Enter the amount of the item: ";
	
	cin >> quant;

	cout << "Enter item price: ";

	cin >> uprice;

	//process phase

	total = quant * uprice;

	//output phase

	cout << "The total price is: " << total;

	return 0;

}