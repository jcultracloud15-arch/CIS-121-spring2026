#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	//var / input phase
	float fixed, ppu, cpu, breakeven;

	cout << "Enter the fixed price: ";
	cin >> fixed;
	cout << "Enter the price per unit: ";
	cin >> ppu;
	cout << "Enter the cost per unit: ";
	cin >> cpu;

	//process phase
	breakeven = (ppu - cpu) / fixed;

	//output phase
	cout << "The breakeven is: " << breakeven;
	return 0;
}