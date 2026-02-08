// COMSC-210 | Lab 3A | Ian Kusmiantoro

#include <iostream>
#include <string>
using namespace std;

struct Restaurant {
    string name;
    string address;
    double rating;
    int years_open;
    int daily_customers;
};

Restaurant getRestaurant();


int main() {

    Restaurant r = getRestaurant();
    cout << "Restaurant name: " << r.name << endl;
    cout << "Restaurant address: " << r.address << endl;
    cout << "Restaurant rating: " << r.rating << endl;
    cout << "Years open: " << r.years_open << endl;
    cout << "Daily customers: " << r.daily_customers << endl;

    return 0;
}

Restaurant getRestaurant() {
    Restaurant r;

    cout << "Enter restaurant name: ";
    getline(cin, r.name);

    cout << "Ender restaurant address: ";
    getline(cin, r.address);

    cout << "Enter restaurant rating: ";
    cin >> r.rating;

    cout << "Enter years open: ";
    cin >> r.years_open;

    cout << "Enter daily customers: ";
    cin >> r.daily_customers;

    return r;
}