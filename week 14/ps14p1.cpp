#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
using namespace std;

class Membership {
private:
    string firstName;
    string lastName;
    int age;
    string type; // Gold, Silver, Bronze

public:
    // Constructor with defaults
    Membership() {
        firstName = "Not Entered";
        lastName = "Not Entered";
        age = 18;
        type = "Bronze";
    }

    // Setters
    void setFirstName(const string& fn) {
        if (fn.empty())
            firstName = "Not Entered";
        else
            firstName = fn;
    }

    void setLastName(const string& ln) {
        if (ln.empty())
            lastName = "Not Entered";
        else
            lastName = ln;
    }

    void setAge(int a) {
        if (a <= 0)
            age = 18;
        else
            age = a;
    }

    void setType(string t) {
        // normalize input
        transform(t.begin(), t.end(), t.begin(), ::tolower);

        if (t == "gold")
            type = "Gold";
        else if (t == "silver")
            type = "Silver";
        else
            type = "Bronze"; // default
    }

    // Getters
    string getFirstName() const { return firstName; }
    string getLastName()  const { return lastName; }
    int getAge()          const { return age; }
    string getType()      const { return type; }

    // Compute cost
    double getCost() const {
        double cost;

        if (type == "Gold")
            cost = 1200.0;
        else if (type == "Silver")
            cost = 1000.0;
        else
            cost = 500.0;

        // 10% discount if age > 50
        if (age > 50)
            cost *= 0.90;

        return cost;
    }

    // Display all info
    void display() const {
        cout << "\n--- Membership Information ---\n";
        cout << "First Name: " << firstName << endl;
        cout << "Last Name : " << lastName << endl;
        cout << "Age       : " << age << endl;
        cout << "Type      : " << type << endl;
        cout << "Cost      : $" << getCost() << endl;
    }
};

int main() {
    Membership member; // single reusable object

    while (true) {
        string input;
        int age;

        cout << "\nEnter First Name (Ctrl+Z to quit): ";
        if (!(cin >> input)) break;
        member.setFirstName(input);

        cout << "Enter Last Name: ";
        cin >> input;
        member.setLastName(input);

        cout << "Enter Age: ";
        cin >> age;
        member.setAge(age);

        cout << "Enter Membership Type (Gold/Silver/Bronze): ";
        cin >> input;
        member.setType(input);

        member.display();
    }

    cout << "\nProgram terminated.\n";
    return 0;
}