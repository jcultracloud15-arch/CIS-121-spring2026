#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float compute_tuition(float credits)
{
	float tuition;

	tuition = credits * 250;

	return tuition;
}

int main()
{
	string last_name;
	float credits, tuition;
	float total_tuition = 0, no_of_students = 0;

	cout << "Enter student last name, ctl+z to stop ";
	cin >> last_name;

	while (!cin.eof())
	{
		cout << "Enter credits taken ";
		cin >> credits;

		tuition = compute_tuition(credits);

		total_tuition = total_tuition + tuition;
		no_of_students = no_of_students + 1;

		cout << setprecision(2) << fixed;
		cout << last_name << " credits " << credits << " tuition owed " << tuition << endl;

		cout << "Enter student last name, ctl+z to stop ";
		cin >> last_name;
	}

	cout << endl << "Total Tuition " << setw(10) << total_tuition << endl;
	cout << "Number of students " << setw(10) << no_of_students << endl;

	system("pause");

	return 0;
}