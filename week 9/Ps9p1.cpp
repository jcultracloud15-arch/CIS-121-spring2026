#include <iostream>
#include <iomanip>
using namespace std;

// Function to compute total
float compute_total(float quantity, float price)
{
    return quantity * price;
}

// Function to compute discounted total
float compute_discount(float total)
{
    float discount_rate, discount_amount, discount_total;

    if (total > 10000.00)
        discount_rate = 0.10;
    else
        discount_rate = 0.05;

    discount_amount = total * discount_rate;
    discount_total = total - discount_amount;

    return discount_total;
}

int main()
{
    float quantity, price;
    float total, discount_total;
    float sum_total = 0, sum_discount_total = 0;

    cout << "Enter quantity and price, Ctrl+Z to stop: ";
    cin >> quantity >> price;

    while (!cin.eof())
    {
        total = compute_total(quantity, price);
        discount_total = compute_discount(total);

        sum_total += total;
        sum_discount_total += discount_total;

        cout << fixed << setprecision(2);
        cout << "Total: $" << total << endl;
        cout << "Discounted Total: $" << discount_total << endl << endl;

        cout << "Enter quantity and price, Ctrl+Z to stop: ";
        cin >> quantity >> price;
    }

    cout << "\nFinal Results:\n";
    cout << "Sum of Totals: $" << setw(10) << sum_total << endl;
    cout << "Sum of Discounted Totals: $" << setw(10) << sum_discount_total << endl;

    return 0;
}