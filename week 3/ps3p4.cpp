#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	//var / input phase
	float purch, current, incdec;

	cout << "Enter the purcahse price: ";
	cin >> purch;
	cout << "Enter the current price: ";
	cin >> current;

	//process phase
	incdec = (current - purch) / purch;

	//output phase
	cout << "The percentage is: " << incdec;

	return 0;
}