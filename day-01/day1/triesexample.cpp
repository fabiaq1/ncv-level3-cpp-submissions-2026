// Made with Blocks to C++
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    // Guess a number between 1 and 10
    int secret = (1 + rand() % (10 - 1 + 1));
    int guess = 0;

    cout << "I am thinking of a number from 1 to 10." << endl;
    while (!(guess == secret)) {
        cout << "Your guess:" << endl;
        cin >> guess;
        tries += 1;
        if (guess < secret) {
            cout << "Too low" << endl;
        } else if (guess > secret) {
            cout << "Too high" << endl;
        } else {
            cout << "Correct!" << endl;
        }
    }
    cout << "You needed " << tries << " tries." << endl;
    return 0;
}
