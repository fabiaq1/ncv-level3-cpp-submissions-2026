#include <iostream>
#include <string>
#include <iomanip> // Used to format currency to 2 decimal places

using namespace std;

int main() {
    // Variable declarations
    string item1_name, item2_name;
    double item1_price, item2_price;
    int item1_qty, item2_qty;

    cout << "--- Welcome to Tech Shop Checkout ---\n\n";

    // Inputs for Item 1
    cout << "Enter name of item 1: ";
    getline(cin, item1_name);
    cout << "Enter price of item 1: ";
    cin >> item1_price;
    cout << "Enter quantity of item 1: ";
    cin >> item1_qty;

    cin.ignore(); // Clear the buffer before reading the next string
    cout << endl;

    // Inputs for Item 2
    cout << "Enter name of item 2: ";
    getline(cin, item2_name);
    cout << "Enter price of item 2: ";
    cin >> item2_price;
    cout << "Enter quantity of item 2: ";
    cin >> item2_qty;

    // Calculations
    double item1_subtotal = item1_price * item1_qty;
    double item2_subtotal = item2_price * item2_qty;
    double total_cost = item1_subtotal + item2_subtotal;

    // Output formatting for decimals
    cout << fixed << setprecision(2);

    // Displaying the receipt
    cout << "\n------- RECEIPT -------\n";
    cout << item1_name << " x" << item1_qty << ":R" << item1_subtotal << endl;
    cout << item2_name << " x" << item2_qty << ": R" << item2_subtotal << endl;
    cout << "-----------------------\n";
    cout << "TOTAL AMOUNT DUE: R" << total_cost << endl;
    cout << "-----------------------\n";

    return 0;
}
