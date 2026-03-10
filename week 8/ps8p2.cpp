#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float compute_pay(char job_code, float hours)
{
	float rate, pay;

	if (job_code == 'L')
		rate = 25;
	else if (job_code == 'A')
		rate = 30;
	else if (job_code == 'J')
		rate = 50;

	if (hours > 40)
		pay = (40 * rate) + ((hours - 40) * rate * 1.5);
	else
		pay = hours * rate;

	return pay;
}

int main()
{
	string last_name;
	char job_code;
	float hours, pay;
	float total_pay = 0, no_of_entries = 0, avg_pay;

	cout << "Enter employee last name, ctl+z to stop ";
	cin >> last_name;

	while (!cin.eof())
	{
		cout << "Enter job code and hours worked ";
		cin >> job_code >> hours;

		pay = compute_pay(job_code, hours);

		total_pay = total_pay + pay;
		no_of_entries = no_of_entries + 1;

		cout << setprecision(2) << fixed;
		cout << last_name << " pay " << pay << endl;

		cout << "Enter employee last name, ctl+z to stop ";
		cin >> last_name;
	}

	avg_pay = total_pay / no_of_entries;

	cout << endl << "Total Pay " << setw(10) << total_pay << endl;
	cout << "Number of entries " << setw(10) << no_of_entries << endl;
	cout << "Average Pay " << setw(10) << avg_pay << endl;

	system("pause");

	return 0;
}