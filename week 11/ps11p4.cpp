#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function to compute bi-weekly pay
float biWeeklyPay(float yearlySalary)
{
    return yearlySalary / 26.0f;
}

int main()
{
    ifstream inFile;
    string lastName;
    float annualSalary, biPay;

    float totalSalaries = 0.0f;
    int employeeCount = 0;
    float averageSalary;

    inFile.open("empl.txt");

    if (!inFile)
    {
        cout << "File could not be opened.\n";
        return 1;
    }

    cout << fixed << setprecision(2);

    while (inFile >> lastName >> annualSalary)
    {
        biPay = biWeeklyPay(annualSalary);

        totalSalaries += annualSalary;
        employeeCount++;

        cout << "Employee:        " << lastName << endl;
        cout << "Annual Salary:  $" << setw(10) << annualSalary << endl;
        cout << "Bi-Weekly Pay:  $" << setw(10) << biPay << endl;
        cout << "-------------------------------\n";
    }

    inFile.close();

    if (employeeCount > 0)
        averageSalary = totalSalaries / employeeCount;
    else
        averageSalary = 0;

    cout << "\nTotal Salaries: $" << totalSalaries << endl;
    cout << "Employees:      " << employeeCount << endl;
    cout << "Average Salary: $" << averageSalary << endl;

    return 0;
}