#include<iostream>
#include<string>

using namespace std;

int main()
{

	//input / var phase
	string iname;
	float quant, uprice{}, exprice;
	char a = 'A';
	char b = 'B';
	char aa = 'a';
	char bb = 'b';

	cout << "Enter the item name: ";
	cin >> iname;
	
	cout << endl;

	cout << "Enter the quantity: ";
	cin >> quant;

	cout << endl;

	//process phase
	auto isFoundA = iname.find(a);
	auto isFoundB = iname.find(b);
	auto isFounda = iname.find(aa);
	auto isFoundb = iname.find(bb);

	if (isFoundA < isFoundB)
	{
		uprice = 10.00;
	}
	else if (isFoundA > isFoundB)
	{
		uprice = 20.00;
	}
	else if (isFounda < isFoundb)
	{
		uprice = 10.00;
	}
	else if (isFounda > isFoundb)
	{
		uprice = 20.00;
	}

	exprice = quant * uprice;

	//output phase
	cout << "The item was: " << iname << endl;

	cout << "The unit price was: " << uprice << endl;

	cout << "The extended price was: " << exprice << endl;

	return 0;
}