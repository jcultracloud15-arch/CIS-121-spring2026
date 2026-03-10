#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float compute_lab_fee(string dept, int course_code)
{
	float fee;

	if (dept == "CIS" && course_code == 101)
		fee = 50.00;
	else if (dept == "CIS" && course_code == 121)
		fee = 100.00;
	else if (dept == "MAT" && course_code == 111)
		fee = 25.00;
	else if (dept == "MAT" && course_code == 112)
		fee = 35.00;
	else if (dept == "ENG" && course_code == 100)
		fee = 55.00;
	else
		fee = 50.00;

	return fee;
}

int main()
{
	string dept;
	int course_code;
	float lab_fee;
	float total_fee = 0, no_of_entries = 0, avg_fee;

	cout << "Enter department, ctl+z to stop ";
	cin >> dept;

	while (!cin.eof())
	{
		cout << "Enter course code ";
		cin >> course_code;

		lab_fee = compute_lab_fee(dept, course_code);

		total_fee = total_fee + lab_fee;
		no_of_entries = no_of_entries + 1;

		cout << setprecision(2) << fixed;
		cout << dept << " " << course_code << " lab fee " << lab_fee << endl;

		cout << "Enter department, ctl+z to stop ";
		cin >> dept;
	}

	avg_fee = total_fee / no_of_entries;

	cout << endl << "Total Lab Fees " << setw(10) << total_fee << endl;
	cout << "Average Lab Fee " << setw(10) << avg_fee << endl;

	system("pause");

	return 0;
}