#include <iostream>
#include <string>

using namespace std;


int main()
{

	//input phase

	char code;
	float hours, rop, gross;

	cout << "Enter your job code: ";
	cin >> code;
	cout << endl << "Enter your hours: ";
	cin >> hours;

	//process phase

	if (hours > 40 && code == 'L')
	{
		rop = 50;
	}
	else if (hours <= 40 && code == 'L')
	{
		rop = 40;
	}
	else if (hours > 60 && code == 'J')
	{
		rop = 100;
	}
	else if (hours <= 60 && code == 'J')
	{
		rop = 75;
	}
	else if (hours > 40 && code == 'A')
	{
		rop = 25;
	}
	else if (hours <= 40 && code == 'A')
	{
		rop = 20;
	}

	gross = hours * rop;

	//output

	cout << "Gross pay: " << gross;



}