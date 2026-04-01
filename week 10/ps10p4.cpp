#include <iostream>
#include <iomanip>
using namespace std;

// Function to compute cost per widget, extended price, tax, and total order
void computeOrder(int widgets,
    float& costPerWidget,
    float& extendedPrice,
    float& salesTax,
    float& totalOrder)
{
    // Determine cost per widget using table
    if (widgets >= 10000)
        costPerWidget = 4.00f;
    else if (widgets >= 5000)
        costPerWidget = 5.00f;
    else
        costPerWidget = 10.00f;

    // Compute values
    extendedPrice = widgets * costPerWidget;
    salesTax = extendedPrice * 0.07f;
    totalOrder = extendedPrice + salesTax;
}

int main()
{
    int widgets;
    float costPerWidget, extendedPrice, salesTax, totalOrder;
    float sumTotalOrders = 0.0f;

    cout << "Enter number of widgets (ctl+z to stop): ";
    cin >> widgets;

    while (!cin.eof())
    {
        computeOrder(widgets, costPerWidget, extendedPrice, salesTax, totalOrder);

        cout << fixed << setprecision(2);
        cout << "Widgets: " << widgets
            << " Cost/Widget: $" << costPerWidget
            << " Extended Price: $" << extendedPrice
            << " Sales Tax: $" << salesTax
            << " Total Order: $" << totalOrder << endl;

        sumTotalOrders += totalOrder;

        cout << "\nEnter number of widgets (ctl+z to stop): ";
        cin >> widgets;
    }

    cout << "\nTotal of all orders: $" << sumTotalOrders << endl;

    return 0;
}