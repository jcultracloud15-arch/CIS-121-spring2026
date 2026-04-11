#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function to compute savings and sales tax
float computeValues(float msrp, float salePrice, float& updatedPrice, float& tax)
{
    float savings;

    savings = msrp - salePrice;
    tax = salePrice * 0.07f;

    updatedPrice = salePrice; // passed back (as required)

    return savings;
}

int main()
{
    ifstream fin;
    string make, model;
    float msrp, salePrice;
    float tax, savings;
    float totalSavings = 0.0f;

    fin.open("auto.txt");

    if (!fin)
    {
        cout << "File could not be opened.\n";
        return 1;
    }

    cout << fixed << setprecision(2);

    while (fin >> make >> model >> msrp >> salePrice)
    {
        savings = computeValues(msrp, salePrice, salePrice, tax);

        totalSavings += savings;

        cout << "Make:        " << make << endl;
        cout << "Model:       " << model << endl;
        cout << "MSRP:       $" << setw(10) << msrp << endl;
        cout << "Sale Price: $" << setw(10) << salePrice << endl;
        cout << "Savings:    $" << setw(10) << savings << endl;
        cout << "Sales Tax:  $" << setw(10) << tax << endl;
        cout << "-----------------------------\n";
    }

    fin.close();

    cout << "\nTotal Savings: $" << totalSavings << endl;

    return 0;
}