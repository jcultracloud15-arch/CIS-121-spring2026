#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    //input
    string city;
    float miles, gallons;
    float mpg;
    float total_miles = 0.0f;
    int trip_count = 0;

    cout << "Enter destination city, miles traveled and gallons used, ctl+z to stop: ";
    cin >> city >> miles >> gallons;

    //process

    while (!cin.eof())   
    {
        
        if (gallons != 0)
            mpg = miles / gallons;
        else
            mpg = 0.0f;   

       
        total_miles = total_miles + miles;
        trip_count = trip_count + 1;

        cout << fixed << setprecision(2);

        cout << "\nDestination City:   " << setw(12) << city << endl;
        cout << "Miles Per Gallon:   " << setw(12) << mpg << endl;

        cout << "\nEnter destination city, miles traveled and gallons used, ctl+z to stop: ";
        cin >> city >> miles >> gallons;

    }

    //output
    cout << endl;
    cout << "Total Miles Traveled: " << setw(12) << total_miles << endl;
    cout << "Number of Trips Made: " << setw(12) << trip_count << endl;

    return 0;
}