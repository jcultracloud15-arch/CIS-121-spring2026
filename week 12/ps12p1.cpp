#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to read data from file into arrays
void loadData(string first[], string last[], double gpa[], int size)
{
    ifstream inFile("students.txt");

    for (int i = 0; i < size; i++)
    {
        inFile >> first[i] >> last[i] >> gpa[i];
    }

    inFile.close();
}

// Function to display data in normal order
void displayForward(string first[], string last[], double gpa[], int size)
{
    cout << "\nStudent List:\n";

    for (int i = 0; i < size; i++)
    {
        cout << first[i] << " " << last[i] << " - " << gpa[i] << endl;
    }
}

// Function to display data in reverse order
void displayReverse(string first[], string last[], double gpa[], int size)
{
    cout << "\nReverse Order:\n";

    for (int i = size - 1; i >= 0; i--)
    {
        cout << first[i] << " " << last[i] << " - " << gpa[i] << endl;
    }
}

int main()
{
    const int SIZE = 10;

    string first[SIZE];
    string last[SIZE];
    double gpa[SIZE];

    // Load data from file
    loadData(first, last, gpa, SIZE);

    // Display forward
    displayForward(first, last, gpa, SIZE);

    // Display reverse
    displayReverse(first, last, gpa, SIZE);

    return 0;
}