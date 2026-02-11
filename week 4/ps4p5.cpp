#include<iostream>
#include<string>

using namespace std;

int main()
{


	//input / var phase

	string lname;
	float dep, gincome, AGI, itr, it;

	cout << "Enter your last name: ";
	cin >> lname;

	cout << endl << "Enter your gross income: $";
	cin >> gincome;

	cout << endl << "Enter the number of dependants: ";
	cin >> dep;

	//process phase

	AGI = (gincome - dep) * 12000;
	
	if (AGI > 50000)
		itr = 0.20;
	else
		itr = 0.10;

	it = AGI * itr;

	if (it < 0)
		it = 100;

	// output phase

	cout << lname << endl << " gross income: $" << gincome << endl << " number of dependants: " << dep << endl << " AGI: $" << AGI << endl << " income tax: $" << it;

}