#include<iostream>
#include<string>

using namespace std;

int main()
{
	//var
	int n1, n2, n3;
	int result;
	//input
	cout << "enter an integer: ";
	cin >> n1;
	cout << "enter an integer: ";
	cin >> n2;
	cout << "enter an integer: ";
	cin >> n3;

	//pros
	result = (n1 + n2) * n3;

	//out
	cout << result << endl;

	return 0;
}