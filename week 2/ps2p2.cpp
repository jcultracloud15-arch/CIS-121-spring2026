#include<iostream>
#include<String>

using namespace std;

int main()
{
	//var / input phase
	int hours, payrate;
	string lname;
	int gross;

	cout << "Enter your last name: ";
	cin >> lname;
	cout << "Enter your pay rate: ";
	cin >> payrate;
	cout << "Enter your hours: ";
	cin >> hours;

	// process phase

	gross = payrate * hours;

	//output phase

	cout << "Your gross pay is: " << gross;

	return 0;
}