#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

// Global structure
struct student
{
    string firstname;
    string lastname;
    char district;
    int credits;
    float tuition;
};

// Function to compute tuition
float compute_tuition(char district, int credits)
{
    float rate;

    if (district == 'I' || district == 'i')
        rate = 250.00;
    else
        rate = 500.00;

    return credits * rate;
}

// Function to display students using range-based loop
void display_students(vector<student>& students)
{
    cout << endl << "Student Information" << endl;

    for (student s : students)
    {
        cout << setprecision(2) << fixed;
        cout << "Name:           " << s.firstname << " " << s.lastname << endl;
        cout << "District Code:  " << s.district << endl;
        cout << "Credits:        " << setw(6) << s.credits << endl;
        cout << "Tuition Owed:  $" << setw(8) << s.tuition << endl;
        cout << endl;
    }

    cout << "Number of Students: " << students.size() << endl;
}

int main()
{
    vector<student> students;

    string fname, lname;
    char district;
    int credits;
    int index = 0;

    cout << "Enter Student First Name (Ctrl+Z to stop): ";
    cin >> fname;

    while (!cin.eof())
    {
        cout << "Enter Student Last Name: ";
        cin >> lname;

        // Validate district code
        do
        {
            cout << "Enter District Code (I/O): ";
            cin >> district;

            if (district != 'I' && district != 'i' && district != 'O' && district != 'o')
            {
                cout << "Error: Invalid district code. Please enter 'I' or 'O'." << endl;
            }

        } while (district != 'I' && district != 'i' && district != 'O' && district != 'o');

        cout << "Enter Credit Hours: ";
        cin >> credits;

        // Add new occurrence to vector
        students.push_back(student());

        // Load data into vector
        students[index].firstname = fname;
        students[index].lastname = lname;
        students[index].district = district;
        students[index].credits = credits;

        // Compute tuition
        students[index].tuition = compute_tuition(district, credits);

        index++;

        cout << "\nEnter Student First Name (Ctrl+Z to stop): ";
        cin >> fname;
    }

    // Display all students
    display_students(students);

    return 0;
}