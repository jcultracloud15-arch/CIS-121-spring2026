#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to compute batting average
float compute_avg(float hits, float at_bats)
{
    float avg;

    if (at_bats == 0)
        return 0; // prevent division by zero

    avg = hits / at_bats;  // correct formula

    return avg;
}

int main()
{
    string last_name;
    float hits, at_bats, avg;
    int player_count = 0;

    cout << "Enter player's last name, Ctrl+Z to stop: ";
    cin >> last_name;

    while (!cin.eof())
    {
        cout << "Enter number of hits and at bats: ";
        cin >> hits >> at_bats;

        avg = compute_avg(hits, at_bats);

        player_count++;

        cout << fixed << setprecision(3);
        cout << last_name << " batting average: " << avg << endl;

        cout << "\nEnter player's last name, Ctrl+Z to stop: ";
        cin >> last_name;
    }

    cout << "\nNumber of players entered: " << player_count << endl;

    return 0;
}