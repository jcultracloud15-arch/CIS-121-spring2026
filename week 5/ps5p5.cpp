#include <iostream>
#include <string>

using namespace std;


int main()
{
	//input phase
	float weight, rpp, total;

	cout << "Enter the weight of the metal: ";
	cin >> weight;

	//process phase
	if (weight > 100)
		rpp = .50;
	else if (weight >= 30)
		rpp = .25;
	else if (weight >= 20)
		rpp = .20;
	else if (weight < 20)
		rpp = .10;

	total = weight * rpp;

	//output phase

	cout << "The wieght is: " << weight << endl << "The rate per pound is: " << rpp << endl << "The total is: " << total;
}