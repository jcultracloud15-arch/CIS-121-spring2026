#include <iostream>
#include <iomanip>
using namespace std;

// Function to compute tuition and tuition owed
void computeTuition(float creditHours, float financialAid,
    float& tuition, float& tuitionOwed)
{
    tuition = creditHours * 250.0f;
    tuitionOwed = tuition - financialAid;
}

int main()
{
    string lastName;
    float creditHours, financialAid;
    float tuition, tuitionOwed;
    float totalOwed = 0.0f;
    int count = 0;

    cout << "Enter student's last name (ctl+z to stop): ";
    cin >> lastName;

    while (!cin.eof())
    {
        cout << "Enter credit hours and financial aid: ";
        cin >> creditHours >> financialAid;

        computeTuition(creditHours, financialAid, tuition, tuitionOwed);

        cout << fixed << setprecision(2);
        cout << lastName << " tuition: $" << tuition
            << " tuition owed: $" << tuitionOwed << endl;

        totalOwed += tuitionOwed;
        count++;

        cout << "\nEnter student's last name (ctl+z to stop): ";
        cin >> lastName;
    }

    cout << "\nSummary:\n";
    cout << "Total tuition owed: $" << totalOwed << endl;
    cout << "Number of students: " << count << endl;

    if (count > 0)
        cout << "Average owed: $" << totalOwed / count << endl;
    else
        cout << "Average owed: $0.00" << endl;

    return 0;
}