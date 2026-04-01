#include <iostream>
#include <iomanip>
using namespace std;

// Function to compute weight charge, area charge, and postage
void computePostage(float weight, int zipcode,
    float& weightCharge, float& areaCharge, float& postage)
{
    float rate;

    // Determine weight charge per ounce
    if (weight > 100)
        rate = 0.02f;
    else if (weight > 50)
        rate = 0.03f;
    else
        rate = 0.05f;

    weightCharge = weight * rate;

    // Determine area charge based on zip code
    if (zipcode == 60171)
        areaCharge = 2.00f;
    else if (zipcode == 60172)
        areaCharge = 2.50f;
    else if (zipcode == 60635)
        areaCharge = 3.00f;
    else
        areaCharge = 5.00f;

    // Compute total postage
    postage = areaCharge + weightCharge;
}

int main()
{
    float weight;
    int zipcode;
    float weightCharge, areaCharge, postage;
    int count = 0;

    cout << "Enter weight and zip code (ctl+z to stop): ";
    cin >> weight >> zipcode;

    while (!cin.eof())
    {
        computePostage(weight, zipcode, weightCharge, areaCharge, postage);

        cout << fixed << setprecision(2);
        cout << "Area Charge: $" << areaCharge << endl;
        cout << "Weight Charge: $" << weightCharge << endl;
        cout << "Postage: $" << postage << endl;

        count++;

        cout << "\nEnter weight and zip code (ctl+z to stop): ";
        cin >> weight >> zipcode;
    }

    cout << "\nTotal number of entries: " << count << endl;

    return 0;
}