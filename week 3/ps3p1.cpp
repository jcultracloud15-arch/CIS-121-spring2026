#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	//var / input phase 
	int exam1, exam2, total;

	cout << "Enter the first exam score: ";
	cin >> exam1;
	cout << "Enter the second exam score: ";
	cin >> exam2;

	//process phase 
	total = (exam1 * 0.60) + (exam2 * 0.40);

	//output phase 
	cout << "The total for the test is: " << total;


	return 0;

}