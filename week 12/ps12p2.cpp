#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to read data from file into arrays
void loadCities(string city[], int pop[], int size)
{
    ifstream inFile("cities.txt");

    for (int i = 0; i < size; i++)
    {
        inFile >> city[i] >> pop[i];
    }

    inFile.close();
}

// Function to display all data
void displayCities(string city[], int pop[], int size)
{
    cout << "\nCity List:\n";

    for (int i = 0; i < size; i++)
    {
        cout << city[i] << " " << pop[i] << endl;
    }
}

// Sequential search function
int findCity(string city[], int size, string target)
{
    for (int i = 0; i < size; i++)
    {
        if (city[i] == target)
        {
            return i; // found
        }
    }
    return -1; // not found
}

int main()
{
    const int SIZE = 8;

    string city[SIZE];
    int population[SIZE];

    // Load and display data
    loadCities(city, population, SIZE);
    displayCities(city, population, SIZE);

    string input;

    cout << "\nEnter city name, ctrl+z to stop: ";

    // Loop until EOF (ctrl+z)
    while (cin >> input)
    {
        int index = findCity(city, SIZE, input);

        if (index != -1)
        {
            cout << city[index] << " has a population of "
                << population[index] << endl;
        }
        else
        {
            cout << input << " not found" << endl;
        }

        cout << "Enter city name, ctrl+z to stop: ";
    }

    cout << "\nGoodbye. Have a nice day.\n";

    return 0;
}