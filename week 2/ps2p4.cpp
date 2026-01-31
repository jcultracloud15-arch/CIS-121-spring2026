#include<iostream>
#include<String>

using namespace std;

int main()
{
	//var / input phase
	string lname;
	int creds, tuition, lab, total;
	tuition = 250;
	lab = 100;

	cout << "Enter your last name: ";
	cin >> lname;
	cout << "Enter your credits taken: ";
	cin >> creds;

	//process phase
	total = (creds * tuition) + lab;

	//output phase
	cout << lname << " your total tuition cost is : " << total;
	return 0;
}