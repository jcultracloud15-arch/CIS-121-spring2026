#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //input
    string last_name;
    float hits, at_bats;
    float batting_average;
    int player_count = 0;

    cout << "Enter last name, hits and at bats, ctl+z to stop: ";
    cin >> last_name >> hits >> at_bats;

    //process
    while (!cin.eof())  
    {
       
        if (at_bats != 0)
            batting_average = hits / at_bats;
        else
            batting_average = 0.0f;   

        player_count = player_count + 1;

        cout << fixed << setprecision(3);

        cout << "\nLast Name:        " << setw(12) << last_name << endl;
        cout << "Batting Average:  " << setw(12) << batting_average << endl;

        cout << "\nEnter last name, hits and at bats, ctl+z to stop: ";
        cin >> last_name >> hits >> at_bats;

    }  

    //output
    cout << endl;
    cout << "Number of players entered: "
        << setw(5) << player_count << endl;

    return 0;
}