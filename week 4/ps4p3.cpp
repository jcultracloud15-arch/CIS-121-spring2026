#include<iostream>
#include<string>

using namespace std;

int main()
{



	// var / input phase

	float quant, cpb, total, shipcharge;

	cout << "Enter the quantity of books: ";
	cin >> quant;
	cout << endl << "Enter the amount of one book: ";
	cin >> cpb;

	cout << endl;

	// process phase

	total = quant * cpb;

	if (total > 50.00)
		shipcharge = 0;
	else
		shipcharge = 25.00;

	// output phase

	cout << "The total is: $" << total << endl << "The shipping charge is: $" << shipcharge;


}