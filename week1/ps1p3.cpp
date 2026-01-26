#include<iostream>
#include<string>

using namespace std;

int main()
{
	//define variable
	string lname;
	int score;


	//input phase
	cout << "Enter your last name: ";
	cin >> lname;
	cout << "Enter your score from 0 to 100: ";
	cin >> score;

	//output phase
	cout << lname << " has a score of " << score << "." << endl;

	return 0;
}