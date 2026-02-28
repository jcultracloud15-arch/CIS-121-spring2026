#include <iostream>
#include <string>

using namespace std;


int main()
{


	//input phase

	char code, day;
	float cost;

	cout << "Enter the equipment code: ";
	cin >> code;
	cout << endl << "Enter the day code: ";
	cin >> day;

	//process phase

	if (code == 'A' && day == 'F')
	{
		cost = 10;
	}
	else if (code == 'A' && day == 'H')
	{
		cost = 15;
	}
	else if (code == 'B' && day == 'H')
	{
		cost = 35;
	}
	else if (code == 'B' && day == 'F')
	{
		cost = 20;
	}
	else if (code == 'C' && day == 'H')
	{
		cost = 40;
	}
	else if (code == 'C' && day == 'F')
	{
		cost = 45;
	}
	else
	{
		cost = 50;
	}


	//output phase

	cout << "rental cost is: $" << cost;

}