#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to determine cost per credit hour
float get_rate(char district_code)
{
    if (district_code == 'I' || district_code == 'i')
        return 250.0;
    else if (district_code == 'O' || district_code == 'o')
        return 550.0;
    else
        return -1; // indicates invalid input
}

// Function to compute tuition cost
float compute_tuition(float credit_hours, float rate)
{
    return credit_hours * rate;
}

int main()
{
    string last_name;
    char district_code;
    float credit_hours, rate, tuition;
    float total_tuition = 0;

    cout << "Enter student last name, Ctrl+Z to stop: ";
    cin >> last_name;

    while (!cin.eof())
    {
        cout << "Enter credit hours and district code (I/O): ";
        cin >> credit_hours >> district_code;

        rate = get_rate(district_code);

        // ✅ Validation check
        if (rate == -1)
        {
            cout << "not correct" << endl;

            cout << "\nEnter student last name, Ctrl+Z to stop: ";
            cin >> last_name;
            continue; // skip rest of loop
        }

        tuition = compute_tuition(credit_hours, rate);
        total_tuition += tuition;

        cout << fixed << setprecision(2);
        cout << last_name << " Tuition Cost: $" << tuition << endl;

        cout << "\nEnter student last name, Ctrl+Z to stop: ";
        cin >> last_name;
    }

    cout << "\nTotal Tuition Cost: $" << setw(10) << total_tuition << endl;

    return 0;
}