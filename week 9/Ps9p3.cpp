#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to compute miles per gallon
float compute_mpg(float miles, float gallons)
{
    if (gallons == 0)
        return 0; // prevent division by zero

    return miles / gallons;
}

// Function to compute gas cost
float compute_cost(float gallons)
{
    const float PRICE_PER_GALLON = 3.50;
    return gallons * PRICE_PER_GALLON;
}

int main()
{
    string city;
    float miles, gallons;
    float mpg, cost;
    float total_cost = 0;

    cout << "Enter destination city, Ctrl+Z to stop: ";
    cin >> city;

    while (!cin.eof())
    {
        cout << "Enter miles traveled and gallons used: ";
        cin >> miles >> gallons;

        mpg = compute_mpg(miles, gallons);
        cost = compute_cost(gallons);

        total_cost += cost;

        cout << fixed << setprecision(2);
        cout << city << " MPG: " << mpg
            << "  Gas Cost: $" << cost << endl;

        cout << "\nEnter destination city, Ctrl+Z to stop: ";
        cin >> city;
    }

    cout << "\nTotal Gas Cost: $" << setw(10) << total_cost << endl;

    return 0;
}