#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare variables
    int level;
    string description = " ";

    //promp the user and get user input
    cout << "Please enter code levels (2 = Level 2,3= level 3 OR= 4= LEVEL 4) \n";
    cin >> level;

    level = tolower(level);
    //testing condition
    switch(level){
        case 1:
            description = "L2";
            break;

        case 2:
            description = "L3";
            break;
        case 3:
            description = "L4";
            break;

        default:
            description ="other, unknown level";
    }
    // displaying output
    cout << "status \t" << description;
    return 0;
}
