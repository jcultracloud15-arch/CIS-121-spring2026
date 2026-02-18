#include <iostream>
#include <string>

using namespace std;


int main()
{
	//input phase
	float salary, taxrate, total;



	cout << "Enter your salary: ";
	cin >> salary;


	//process phase
	if (salary > 100000)
		taxrate = 0.4;
	else if (salary >= 50000)
		taxrate = 0.35;
	else if (salary < 50000)
		taxrate = 0.25;

	total = salary * taxrate;

	//output phase

	cout << "salary: " << salary << endl << "Tax rate: " << taxrate << endl << "Tax amount: " << total;

	
}