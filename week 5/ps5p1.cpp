#include <iostream>
#include <string>

using namespace std;


int main()
{
	
	//input phase
	string lname;
	float score;
	char grade;

	cout << "Enter your last name: ";
	cin >> lname;
	cout << endl << "Enter your test score: ";
	cin >> score;

	//process phase
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else if (score <= 59)
		grade = 'F';

	//output phase

	cout << lname << "'s grade is: " << grade;



}