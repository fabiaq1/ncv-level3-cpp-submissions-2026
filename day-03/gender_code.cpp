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
    //testing condition
    if(code == 'M' || code== 'm')
    {
      message = "Male";
    }
    else if(code == 'F' || code == 'f')
    {
         message = "female";
    }
    else
    {
        message ="other, unknown";
    }
    // displaying output
    cout << "status \t" << message;
    return 0;

}
