#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Computer {
private:
    string make;       // Lenovo, HP, Apple
    string model;      // e.g., L12345 (no spaces)
    string cpu;        // Intel, AMD
    string ram;        // 8GB, 16GB, 32GB
    string drive;      // SSD, HD
    string type;       // Laptop, Notebook, Tablet, Desktop

    // helper to lowercase
    static string lower(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }

public:
    // Constructor with defaults
    Computer() {
        make = "Lenovo";
        model = "LE100A";
        cpu = "Intel";
        ram = "32GB";
        drive = "HD";
        type = "Laptop";
    }

    // Setters with validation/defaulting
    void setMake(string m) {
        string t = lower(m);
        if (t == "lenovo") make = "Lenovo";
        else if (t == "hp") make = "HP";
        else if (t == "apple") make = "Apple";
        else make = "Lenovo";
    }

    void setModel(const string& m) {
        if (m.empty())
            model = "LE100A";
        else
            model = m; // assumes no spaces per spec
    }

    void setCPU(string c) {
        string t = lower(c);
        if (t == "intel") cpu = "Intel";
        else if (t == "amd") cpu = "AMD";
        else cpu = "Intel";
    }

    void setRAM(string r) {
        string t = lower(r);
        if (t == "8gb") ram = "8GB";
        else if (t == "16gb") ram = "16GB";
        else if (t == "32gb") ram = "32GB";
        else ram = "32GB";
    }

    void setDrive(string d) {
        string t = lower(d);
        if (t == "ssd") drive = "SSD";
        else drive = "HD";
    }

    void setType(string t) {
        string x = lower(t);
        if (x == "laptop") type = "Laptop";
        else if (x == "notebook") type = "Notebook";
        else if (x == "tablet") type = "Tablet";
        else if (x == "desktop") type = "Desktop";
        else type = "Laptop";
    }

    // Getters
    string getMake()  const { return make; }
    string getModel() const { return model; }
    string getCPU()   const { return cpu; }
    string getRAM()   const { return ram; }
    string getDrive() const { return drive; }
    string getType()  const { return type; }

    // Cost computation per rules
    double getCost() const {
        double cost = 0.0;

        // Make
        if (make == "Lenovo") cost += 1200.0;
        else if (make == "HP") cost += 1000.0;
        else if (make == "Apple") cost += 2000.0;

        // CPU
        if (cpu == "Intel") cost += 200.0;
        // AMD adds 0 per spec

        // RAM
        if (ram == "16GB") cost += 300.0;
        else if (ram == "32GB") cost += 500.0;
        // 8GB adds 0

        // Drive
        if (drive == "SSD") cost += 500.0;
        // HD adds 0

        // Type
        if (type == "Laptop") cost += 300.0;
        else if (type == "Tablet") cost -= 200.0;
        // Notebook/Desktop add 0

        return cost;
    }

    // Display
    void display() const {
        cout << "\n--- Computer Asset ---\n";
        cout << "Make   : " << make << "\n";
        cout << "Model  : " << model << "\n";
        cout << "CPU    : " << cpu << "\n";
        cout << "RAM    : " << ram << "\n";
        cout << "Drive  : " << drive << "\n";
        cout << "Type   : " << type << "\n";
        cout << "Cost   : $" << getCost() << "\n";
    }
};

int main() {
    Computer comp; // reuse same object each loop

    while (true) {
        string s;

        cout << "\nEnter Make (Lenovo/HP/Apple) (Ctrl+Z to quit): ";
        if (!(cin >> s)) break;
        comp.setMake(s);

        cout << "Enter Model (no spaces): ";
        cin >> s;
        comp.setModel(s);

        cout << "Enter CPU (Intel/AMD): ";
        cin >> s;
        comp.setCPU(s);

        cout << "Enter RAM (8GB/16GB/32GB): ";
        cin >> s;
        comp.setRAM(s);

        cout << "Enter Hard Drive (SSD/HD): ";
        cin >> s;
        comp.setDrive(s);

        cout << "Enter Type (Laptop/Notebook/Tablet/Desktop): ";
        cin >> s;
        comp.setType(s);

        comp.display();
    }

    cout << "\nProgram terminated.\n";
    return 0;
}