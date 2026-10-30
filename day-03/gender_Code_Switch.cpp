#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare variables
    char code;
    string message = " ";

    //promp the user and get user input
    cout << "Please enter gender code(F--Female or M--Male) \n";
    cin >> code;

    code = tolower(code);
    //testing condition
    switch(code){
        case 'm':
            message = "Male";
            break;

        case 'f':
            message = "female";
            break;

        default:
            message ="other, unknown";
    }
    // displaying output
    cout << "status \t" << message;
    return 0;

}
