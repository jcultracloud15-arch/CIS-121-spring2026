#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Load data from file
void loadEmployees(string first[], string last[], double salary[], int size)
{
    ifstream inFile("Empldata.txt");

    for (int i = 0; i < size; i++)
    {
        inFile >> first[i] >> last[i] >> salary[i];
    }

    inFile.close();
}

// Display all employees
void displayEmployees(string first[], string last[], double salary[], int size)
{
    cout << "\nEmployee List:\n";

    for (int i = 0; i < size; i++)
    {
        cout << first[i] << " " << last[i]
            << " - $" << salary[i] << endl;
    }
}

// Sequential search that prints ALL matches
void searchLastName(string first[], string last[], double salary[], int size, string target)
{
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (last[i] == target)
        {
            cout << first[i] << " " << last[i]
                << " earns $" << salary[i] << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << target << " not found" << endl;
    }
}

int main()
{
    const int SIZE = 10;

    string first[SIZE];
    string last[SIZE];
    double salary[SIZE];

    loadEmployees(first, last, salary, SIZE);
    displayEmployees(first, last, salary, SIZE);

    string input;

    cout << "\nEnter last name, ctrl+z to stop: ";

    while (cin >> input)
    {
        searchLastName(first, last, salary, SIZE, input);
        cout << "Enter last name, ctrl+z to stop: ";
    }

    cout << "\nGoodbye. Have a nice day.\n";

    return 0;
}