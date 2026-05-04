// Base + Derived Class Demo

#include<iostream>
#include<string>

using namespace std;

// ================= BASE CLASS =================
class Employee
{
public:
    Employee();
    void FirstName(string fn);
    string FirstName();
    void LastName(string ln);
    string LastName();
    void Salary(float);
    float Salary();
    float Bonus();
    ~Employee();

protected:
    string m_fn, m_ln;
    float m_salary;
    float m_bonus;
};

Employee::~Employee()
{
    cout << "Goodbye" << endl;
    system("pause");
}

Employee::Employee()
{
    m_salary = 0.00f;
}

void Employee::FirstName(string fn)
{
    m_fn = fn;
}

string Employee::FirstName()
{
    return m_fn;
}

void Employee::LastName(string ln)
{
    m_ln = ln;
}

string Employee::LastName()
{
    return m_ln;
}

void Employee::Salary(float s)
{
    m_salary = s;
}

float Employee::Salary()
{
    return m_salary;
}

float Employee::Bonus()
{
    if (m_salary > 100000.00)
        m_bonus = m_salary * 0.20f;
    else
        m_bonus = m_salary * 0.10f;

    return m_bonus;
}

// ================= DERIVED CLASS =================
class Manager : public Employee
{
public:
    float Long_Term_Bonus();   // new method
    float Bonus();             // override
};

float Manager::Long_Term_Bonus()
{
    return m_salary * 0.50f;
}

// Override base Bonus()
float Manager::Bonus()
{
    return m_salary * 0.50f;
}

// ================= TEST PROGRAM =================
int main()
{
    // Create Manager object
    Manager mgr;

    // Load data
    mgr.FirstName("Jose");
    mgr.LastName("Cruz");
    mgr.Salary(120000.00f);

    // Display results
    cout << "Manager Information" << endl;
    cout << "--------------------" << endl;
    cout << "First Name: " << mgr.FirstName() << endl;
    cout << "Last Name: " << mgr.LastName() << endl;
    cout << "Salary: $" << mgr.Salary() << endl;

    // Base vs overridden behavior demonstration
    cout << "\nComputed Bonuses" << endl;
    cout << "--------------------" << endl;
    cout << "Manager Bonus (Overridden): $" << mgr.Bonus() << endl;
    cout << "Long Term Bonus: $" << mgr.Long_Term_Bonus() << endl;

    return 0;
}