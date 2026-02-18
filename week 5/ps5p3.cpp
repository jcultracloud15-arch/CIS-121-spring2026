#include <iostream>
#include <string>

using namespace std;


int main()
{
	//input phase
	string lname, fail;
	float hours, pr, total;
	char code;



	cout << "Enter your last name: ";
	cin >> lname;
	cout << endl << "Enter hours worked: ";
	cin >> hours;
	cout << endl << "Enter the job code: ";
	cin >> code;


	//process phase
	if (code == 'E' || code == 'e')
		pr = 25.00;
	else if (code == 'J' || code == 'j')
		pr = 20.00;
	else if (code == 'A' || code == 'a')
		pr = 15.00;
	else
	{
		fail = "YOU DON'T WORK HERE!!!";
			pr = 0;
	}

	total = hours * pr;

	//output phase

	if (total > 0)
		cout << lname << ":" << endl << "Hours worked: " << hours << endl << "Pay rate: " << pr << endl << "Total: " << total;
	else
		cout << fail;
}