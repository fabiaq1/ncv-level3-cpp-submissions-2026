// Made with Blocks to C++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    string Gender = "";
    cout << "What is your name?" << endl;
    getline(cin >> ws, name);
    cout << "What is your Gender?" << endl;
    getline(cin >> ws, Gender);
    //cout << "Hello," << name << endl;
    if (Gender == "F" || Gender == "f") {
        cout << "Hello," << name << "You are a lovely lady" << endl;
    } else {
        cout << "Hello," << name << "You are a clever gentleman" << endl;
    }
    return 0;
}
