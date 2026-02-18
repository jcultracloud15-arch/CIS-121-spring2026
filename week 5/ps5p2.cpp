#include <iostream>
#include <string>

using namespace std;


int main()
{
	//input phase
	float quant, ppp, total;

	cout << "Enter the lbs of appels: ";
	cin >> quant;

	//process phase
	if (quant > 100)
		ppp = .10;
	else if (quant >= 50)
		ppp = .25;
	else if (quant < 50)
		ppp = .50;

	total = quant * ppp;

	//output phase

	cout << "The price per pound is: " << ppp << endl << "The total is: " << total;
}