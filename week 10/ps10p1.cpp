#include <iostream>
#include <iomanip>
using namespace std;

// Function to compute total, tax, and total order
void computeOrder(float quantity, float price, float& total, float& tax, float& totalOrder)
{
    total = quantity * price;
    tax = total * 0.07f;
    totalOrder = total + tax;
}

int main()
{
    float quantity, price;
    float total, tax, totalOrder;
    float sumTotal = 0.0f, sumTax = 0.0f;

    cout << "Enter quantity and price (ctl+z to stop): ";
    cin >> quantity >> price;

    while (!cin.eof())
    {
        computeOrder(quantity, price, total, tax, totalOrder);

        cout << fixed << setprecision(2);
        cout << "Total: $" << total << endl;
        cout << "Tax: $" << tax << endl;
        cout << "Total Order: $" << totalOrder << endl;

        // accumulate totals
        sumTotal += total;
        sumTax += tax;

        cout << "\nEnter quantity and price (ctl+z to stop): ";
        cin >> quantity >> price;
    }

    cout << "\nSummary for all orders:\n";
    cout << "Total of all orders: $" << sumTotal << endl;
    cout << "Total tax: $" << sumTax << endl;

    return 0;
}