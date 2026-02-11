#include<iostream>
#include<string>

using namespace std;

int main()
{


	//var / input phase

	string appname;
	float coa, cow, total;

	cout << "Enter the name of the appliance: ";
	cin >> appname;

	cout << endl;
	cout << "Enter the cost of the appliance: $";
	cin >> coa;

	//process pahse

	if (coa > 1000)
		cow = coa * 0.10;
	else
		cow = coa * 0.05;

	total = coa + cow;

	//output phase

	cout << "The " << appname << " cost: $" << coa << endl << "The cost of the warrentee is: $" << cow << endl << "The total is: $" << total;

}