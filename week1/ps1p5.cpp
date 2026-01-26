#include<iostream>
#include<string>

using namespace std;

int main()
{
	//vars
	int num1, num2;
	int sum, diff, prod;

	//input
	cout << "enter a number: ";
	cin >> num1;
	cout << "enter another: ";
	cin >> num2;

	//pros
	sum = num1 + num2;
	diff = num1 / num2;
	prod = num1 * num2;

	//output
	cout << "sum: " << sum << endl;
	cout << "difference: " << diff << endl;
	cout << "product: " << prod <<endl;
	return 0;
}