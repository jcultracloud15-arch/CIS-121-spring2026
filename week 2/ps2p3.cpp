#include<iostream>
#include<String>

using namespace std;

int main()
{
	//var / input phase
	int len, wid, area, circ;

	cout << "Enter the length: ";
	cin >> len;
	cout << "Enter the width: ";
	cin >> wid;


	//process phase

	area = len * wid;

	circ = (2 * len) + (2 * wid);

	//output phase
	cout << "The area is: " << area << ". " << "And the circumference is: " << circ;
	return 0;
}