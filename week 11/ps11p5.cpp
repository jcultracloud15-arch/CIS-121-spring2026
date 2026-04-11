#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function to compute tuition and fees
void calculateCosts(char code, float credits, float& tuition, float& fees, float& rate)
{
    if (code == 'I')
        rate = 250.0f;
    else
        rate = 500.0f;

    tuition = credits * rate;
    fees = tuition * 0.10f;
}

int main()
{
    ifstream file;
    string name;
    char studentCode;
    float credits;

    float tuition, fees, costPerCredit;
    float totalTuition = 0.0f;
    int studentCount = 0;
    float averageTuition;

    file.open("student.txt");

    if (!file)
    {
        cout << "Error opening file.\n";
        return 1;
    }

    cout << fixed << setprecision(2);

    while (file >> name >> studentCode >> credits)
    {
        calculateCosts(studentCode, credits, tuition, fees, costPerCredit);

        totalTuition += tuition;
        studentCount++;

        cout << "Name:             " << name << endl;
        cout << "Student Code:     " << studentCode << endl;
        cout << "Cost/Credit:     $" << setw(8) << costPerCredit << endl;
        cout << "Credits Taken:    " << setw(8) << credits << endl;
        cout << "Tuition Owed:    $" << setw(8) << tuition << endl;
        cout << "Course Fees:     $" << setw(8) << fees << endl;
        cout << "----------------------------------\n";
    }

    file.close();

    if (studentCount > 0)
        averageTuition = totalTuition / studentCount;
    else
        averageTuition = 0;

    cout << "\nTotal Tuition:   $" << totalTuition << endl;
    cout << "Students:         " << studentCount << endl;
    cout << "Average Tuition: $" << averageTuition << endl;

    return 0;
}