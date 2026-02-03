#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{

	//var / input phase
	float tpmeal, total, tip;

	cout << "Enter the total price for your meal: ";
	cin >> tpmeal;

	//process phase
	tip = tpmeal * 0.15;
	total = tpmeal + tip;


	//output phase
	cout << "The total for the meal before the tip is: " << tpmeal << ". " << "The tip is 15%. " << "The total for the meal with tip is: " << total;

	return 0;
}