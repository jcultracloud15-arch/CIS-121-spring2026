#include<iostream>
#include<iomanip>
#include<String>

using namespace std;

int main()
{

    //input 
    float qty, price;
    float extended, discount, discounted_price;
    float total_all_entries = 0.0f;

    cout << "Enter quantity and price, ctl+z to stop: ";
    cin >> qty >> price;

    //process
    while (!cin.eof())
    {
        
        extended = qty * price;

        
        if (qty > 1000)
            discount = extended * 0.10f;
        else
            discount = 0.0f;

       
        discounted_price = extended - discount;

        
        total_all_entries = total_all_entries + discounted_price;

        cout << fixed << setprecision(2);

        cout << "\nQuantity:           " << setw(10) << qty << endl;
        cout << "Price:              " << setw(10) << price << endl;
        cout << "Extended Price:     " << setw(10) << extended << endl;
        cout << "Discount Amount:    " << setw(10) << discount << endl;
        cout << "Discounted Price:   " << setw(10) << discounted_price << endl;

        cout << "\nEnter quantity and price, ctl+z to stop: ";
        cin >> qty >> price;

    }

    //output
    cout << endl;
    cout << "Total of discounted prices: "
        << setw(10) << total_all_entries << endl;

    return 0;
}