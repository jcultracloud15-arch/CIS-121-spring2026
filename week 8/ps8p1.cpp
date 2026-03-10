#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float compute_mpg(float miles_trav, float gallons)
{
	float mpg;

	mpg = miles_trav / gallons;

	return mpg;
}

int main()
{
	float miles_trav, gallons, mpg;
	string city;
	float total_miles = 0, no_of_trips = 0;

	cout << "Enter destination city, ctl+z to stop ";
	cin >> city;

	while (!cin.eof())
	{
		cout << "Enter miles travelled and gallons used ";
		cin >> miles_trav >> gallons;

		mpg = compute_mpg(miles_trav, gallons);

		total_miles = total_miles + miles_trav;
		no_of_trips = no_of_trips + 1;

		cout << setprecision(2) << fixed;
		cout << city << " miles per gallon " << mpg << endl;

		cout << "Enter destination city, ctl+z to stop ";
		cin >> city;
	}

	cout << endl << "Total Miles " << setw(8) << total_miles << endl;
	cout << "Number of trips " << setw(8) << no_of_trips << endl;

	system("pause");

	return 0;
}