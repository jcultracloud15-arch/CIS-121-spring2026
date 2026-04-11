#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function to compute extended price
float calcExtended(int qty, float unitCost)
{
    return qty * unitCost;
}

int main()
{
    ifstream inputFile;
    string itemName;
    int quantity;
    float unitCost, extendedPrice;

    float subtotal = 0.0f;
    float tax, total;

    inputFile.open("grocery.txt");

    if (!inputFile)
    {
        cout << "Unable to open file.\n";
        return 1;
    }

    cout << fixed << setprecision(2);

    while (inputFile >> itemName >> quantity >> unitCost)
    {
        extendedPrice = calcExtended(quantity, unitCost);
        subtotal += extendedPrice;

        cout << "Item:          " << itemName << endl;
        cout << "Quantity:      " << quantity << endl;
        cout << "Unit Cost:    $" << setw(8) << unitCost << endl;
        cout << "Ext. Price:   $" << setw(8) << extendedPrice << endl;
        cout << "-----------------------------\n";
    }

    inputFile.close();

    tax = subtotal * 0.07f;
    total = subtotal + tax;

    cout << "\nSubtotal:      $" << subtotal << endl;
    cout << "Tax (7%):      $" << tax << endl;
    cout << "Total:         $" << total << endl;

    return 0;
}