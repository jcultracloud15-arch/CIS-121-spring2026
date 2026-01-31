#include<iostream>
#include<String>

using namespace std;

int main()
{
	//var / input phase

	float price, disper, total;
	
	cout << "Enter the price of the item: ";
	cin >> price;
	cout << "Enter the discount percent: ";
	cin >> disper;

	//process phase
	total = price * disper;

	//output phase
	cout << "The discount amount was: " << disper << " and the new item price is: " << total;
	return 0;
}