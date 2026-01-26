#include<iostream>
#include<string>

using namespace std;

int main()
{
	//define var
	int num1, num2;
	int sum;

	//input phas
	cout << "Type a positive number between 1 and 100: ";
	cin >> num1;
	cout << "Type a positive number between 1 and 100: ";
	cin >> num2;

	//process phas
	sum = num1 + num2;

	//output phas
	cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
	return 0;
}