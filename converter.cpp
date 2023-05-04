#include <iostream>
using namespace std;

int main() {
    double amount, converted_amount;
    int choice;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "Select currency to convert from: " << endl;
    cout << "1. USD" << endl;
    cout << "2. EUR" << endl;
    cout << "3. JPY" << endl;
    cout << "4. GBP" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        converted_amount = amount * 0.85; // convert USD to EUR
        cout << "Converted amount: " << converted_amount << " EUR" << endl;
        break;
    case 2:
        converted_amount = amount * 1.17; // convert EUR to USD
        cout << "Converted amount: " << converted_amount << " USD" << endl;
        break;
    case 3:
        converted_amount = amount * 0.0077; // convert JPY to USD
        cout << "Converted amount: " << converted_amount << " USD" << endl;
        break;
    case 4:
        converted_amount = amount * 1.39; // convert GBP to USD
        cout << "Converted amount: " << converted_amount << " USD" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return 0;
}
