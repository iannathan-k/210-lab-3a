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

void printRestuarant(Restaurant r);

int main() {

    // Create and populate 4 Restaurant structs
    Restaurant r1 = getRestaurant();
    Restaurant r2 = getRestaurant();
    Restaurant r3 = getRestaurant();
    Restaurant r4 = getRestaurant();

    // Print out the contents of the 4 Restaurant structs
    printRestuarant(r1);
    printRestuarant(r2);
    printRestuarant(r3);
    printRestuarant(r4);

    return 0;
}

// printRestuarant() prints out the contents of a Resturant r in a nice, presentable format.
// arguments: Restaurant r
// returns: none
void printRestuarant(Restaurant r) {
    cout << "Restaurant name: " << r.name << endl;
    cout << "Restaurant address: " << r.address << endl;
    cout << "Restaurant rating: " << r.rating << endl;
    cout << "Years open: " << r.years_open << endl;
    cout << "Daily customers: " << r.daily_customers << endl;
    cout << endl;
}

// getRestaurant() returns a temporary Restaurant struct populated with console input.
// arguments: none
// returns: Restaurant r
Restaurant getRestaurant() {
    Restaurant r;

    cout << "Enter restaurant name: ";
    getline(cin, r.name); // getline() is used as name and address may contain spaces

    cout << "Enter restaurant address: ";
    getline(cin, r.address);

    cout << "Enter restaurant rating: ";
    cin >> r.rating; // cin is used because rating, years_open and daily_customers will not contain spaces

    // Validate rating
    while (r.rating < 0.0 || r.rating > 5.0) {
        cout << "Invalid rating, must be between 0.0 and 5.0: ";
        cin >> r.rating;
    }

    cout << "Enter years open: ";
    cin >> r.years_open;

    cout << "Enter daily customers: ";
    cin >> r.daily_customers;

    // Clear the input buffer from the leftover newline
    cin.ignore();
    cout << endl;

    return r;
}