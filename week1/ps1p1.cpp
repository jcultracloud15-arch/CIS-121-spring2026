#include<iostream>
#include<string>

using namespace std;

int main()
{
	//define variable
	string fname;
	string lname;
	string send;
	

	//input phase
	cout << "Enter your fisrt name: ";
	cin >> fname;
	cout << "Enter your last name: ";
	cin >> lname;

	//process phase
	send = lname;

	//output phase
	cout << "Hello " << send << endl;

	return 0;
}