#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //input 
    string last_name;
    char district_code;
    float credit_hours;
    float rate, tuition;

    float total_tuition = 0.0f;
    float total_credit_hours = 0.0f;
    int student_count = 0;

    cout << "Enter last name, credit hours and district code, ctl+z to stop: ";
    cin >> last_name >> credit_hours >> district_code;

    //process
    while (!cin.eof())   
    {
        
        if (district_code == 'I' || district_code == 'i')
            rate = 250.0f;
        else if (district_code == 'O' || district_code == 'o')
            rate = 550.0f;
        else
            rate = 0.0f;  

        
        tuition = credit_hours * rate;

        total_tuition = total_tuition + tuition;
        total_credit_hours = total_credit_hours + credit_hours;
        student_count = student_count + 1;

        cout << fixed << setprecision(2);

        cout << "\nStudent Last Name:   " << setw(12) << last_name << endl;
        cout << "Tuition Owed:        " << setw(12) << tuition << endl;

        cout << "\nEnter last name, credit hours and district code, ctl+z to stop: ";
        cin >> last_name >> credit_hours >> district_code;

    }  

    //output
    cout << endl;
    cout << "Total Tuition Owed:      " << setw(12) << total_tuition << endl;
    cout << "Total Credit Hours:      " << setw(12) << total_credit_hours << endl;
    cout << "Number of Students:      " << setw(12) << student_count << endl;

    return 0;
}