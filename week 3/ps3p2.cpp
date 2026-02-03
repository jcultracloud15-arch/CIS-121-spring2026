#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	//var / input phase
	float price, quant, value;
	
	cout << "Enter current stock price: ";

	cin >> price;

	cout << "Enter current quantity of stock: ";

	cin >> quant;

	//process phase 
	value = price * quant;

	//output phase

	cout << "The value is: " << value;

	return 0;

}