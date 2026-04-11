#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Function to compute miles per gallon
float computeMPG(float gallons, float miles)
{
    return miles / gallons;
}

int main()
{
    ifstream dataFile;
    float gallonsUsed, milesDriven, mpg;

    float totalGallons = 0.0f;
    float totalMiles = 0.0f;

    dataFile.open("trips.txt");

    if (!dataFile)
    {
        cout << "Error opening file.\n";
        return 1;
    }

    cout << fixed << setprecision(2);

    while (dataFile >> gallonsUsed >> milesDriven)
    {
        mpg = computeMPG(gallonsUsed, milesDriven);

        totalGallons += gallonsUsed;
        totalMiles += milesDriven;

        cout << "Gallons Used: " << setw(8) << gallonsUsed << endl;
        cout << "Miles Driven: " << setw(8) << milesDriven << endl;
        cout << "MPG:          " << setw(8) << mpg << endl;
        cout << "-----------------------------\n";
    }

    dataFile.close();

    cout << "\nTotal Gallons: " << totalGallons << endl;
    cout << "Total Miles:   " << totalMiles << endl;

    return 0;
}