#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

// Function to compute 5-year and 10-year amounts
void computeInvestment(float amount, float rate5, float rate10,
    float& amount5, float& amount10)
{
    amount5 = amount * pow(1 + rate5, 5);
    amount10 = amount * pow(1 + rate10, 10);
}

int main()
{
    float amount, rate5, rate10;
    float amount5, amount10;

    cout << "Enter investment amount, 5-year rate, 10-year rate (ctl+z to stop): ";
    cin >> amount >> rate5 >> rate10;

    while (!cin.eof())
    {
        computeInvestment(amount, rate5, rate10, amount5, amount10);

        cout << fixed << setprecision(2);
        cout << "Investment: $" << amount
            << " 5-Year Amount: $" << amount5
            << " 10-Year Amount: $" << amount10 << endl;

        cout << "\nEnter investment amount, 5-year rate, 10-year rate (ctl+z to stop): ";
        cin >> amount >> rate5 >> rate10;
    }

    return 0;
}