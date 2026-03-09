#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //input
    string last_name;
    char job_code;
    float hours, rate, pay;
    float total_pay = 0.0f;
    int employee_count = 0;

    cout << "Enter last name, job code and hours worked, ctl+z to stop: ";
    cin >> last_name >> job_code >> hours;

    //process
    while (!cin.eof())   
    {
        
        if (job_code == 'L' || job_code == 'l')
            rate = 25.0f;
        else if (job_code == 'A' || job_code == 'a')
            rate = 30.0f;
        else if (job_code == 'J' || job_code == 'j')
            rate = 50.0f;
        else
            rate = 0.0f;   

       
        if (hours > 40)
            pay = (40 * rate) + ((hours - 40) * rate * 1.5f);
        else
            pay = hours * rate;

        total_pay = total_pay + pay;
        employee_count = employee_count + 1;

        cout << fixed << setprecision(2);

        cout << "\nLast Name:      " << setw(12) << last_name << endl;
        cout << "Job Code:       " << setw(12) << job_code << endl;
        cout << "Hours Worked:   " << setw(12) << hours << endl;
        cout << "Pay:            " << setw(12) << pay << endl;

        cout << "\nEnter last name, job code and hours worked, ctl+z to stop: ";
        cin >> last_name >> job_code >> hours;

    } 

    //output
    float average_pay = 0.0f;

    if (employee_count != 0)
        average_pay = total_pay / employee_count;

    cout << endl;
    cout << "Number of Employees: " << setw(10) << employee_count << endl;
    cout << "Average Pay:         " << setw(10) << average_pay << endl;

    return 0;
}