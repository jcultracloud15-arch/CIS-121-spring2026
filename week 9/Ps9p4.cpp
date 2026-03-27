#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to determine pay rate based on job code
float get_rate(char job_code)
{
    if (job_code == 'L' || job_code == 'l')
        return 25.0;
    else if (job_code == 'A' || job_code == 'a')
        return 30.0;
    else if (job_code == 'J' || job_code == 'j')
        return 50.0;
    else
        return 0; // invalid job code
}

// Function to compute gross pay (with overtime)
float compute_gross(float hours, float rate)
{
    float gross;

    if (hours > 40)
        gross = (40 * rate) + ((hours - 40) * rate * 1.5);
    else
        gross = hours * rate;

    return gross;
}

int main()
{
    string last_name;
    char job_code;
    float hours, rate, gross;
    float total_gross = 0;

    cout << "Enter employee last name, Ctrl+Z to stop: ";
    cin >> last_name;

    while (!cin.eof())
    {
        cout << "Enter job code (L/A/J) and hours worked: ";
        cin >> job_code >> hours;

        rate = get_rate(job_code);
        gross = compute_gross(hours, rate);

        total_gross += gross;

        cout << fixed << setprecision(2);
        cout << last_name << " Gross Pay: $" << gross << endl;

        cout << "\nEnter employee last name, Ctrl+Z to stop: ";
        cin >> last_name;
    }

    cout << "\nTotal Gross Pay: $" << setw(10) << total_gross << endl;

    return 0;
}