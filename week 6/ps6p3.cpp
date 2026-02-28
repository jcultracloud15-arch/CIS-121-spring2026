#include <iostream>
#include <string>

using namespace std;


int main()
{




	// input phase 

	float ticket, ppt, total;
	char code;



	cout << "Enter the amount of tickets: ";
	cin >> ticket;
	cout << endl << "Enter the location code: ";
	cin >> code;


	//process phase

	if(ticket > 25)
	{
		ppt = 30;

	}
	else if (code == 'H')
	{
		ppt = 30;
	}
	else if (ticket > 10)
	{
		ppt = 40;

	}
	else if (code == 'L')
	{
		ppt = 40;
	}
	else
	{
		ppt = 50;
	}

	total = ppt * ticket;

	//output phase

	cout << "tickets: " << ticket << endl << "price per ticket: " << ppt << endl << "total: " << total;





}