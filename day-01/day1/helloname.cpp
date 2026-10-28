// Made with Blocks to C++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    cout << "What is your name?" << endl;
    getline(cin >> ws, name);
    cout << "Hello, " << name << endl;
    return 0;
}
