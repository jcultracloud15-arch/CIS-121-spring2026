#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float get_unit_price(char product_code)
{
	float price;

	if (product_code == 'W')
		price = 10.00;
	else if (product_code == 'C')
		price = 15.00;
	else if (product_code == 'G')
		price = 20.00;

	return price;
}

float compute_shipping(char product_code)
{
	float shipping;

	if (product_code == 'W')
		shipping = 2.00;
	else if (product_code == 'C')
		shipping = 5.00;
	else if (product_code == 'G')
		shipping = 7.00;

	return shipping;
}

int main()
{
	char product_code;
	float quantity;
	float unit_price, shipping, extended_price, total;
	float total_all = 0;

	cout << "Enter product code, ctl+z to stop ";
	cin >> product_code;

	while (!cin.eof())
	{
		cout << "Enter quantity ";
		cin >> quantity;

		unit_price = get_unit_price(product_code);
		shipping = compute_shipping(product_code);

		extended_price = quantity * unit_price;
		total = extended_price + shipping;

		total_all = total_all + total;

		cout << setprecision(2) << fixed;
		cout << "Product " << product_code
			<< " Unit Price " << unit_price
			<< " Shipping " << shipping
			<< " Extended Price " << extended_price
			<< " Total " << total << endl;

		cout << "Enter product code, ctl+z to stop ";
		cin >> product_code;
	}

	cout << endl << "Total of all entries " << setw(10) << total_all << endl;

	system("pause");

	return 0;
}