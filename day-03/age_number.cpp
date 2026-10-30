#include <iostream>
#include <string>

using namespace std;
int main()
{
    //declare variable
    int num1 = 0;
    int num2 = 0;
    string messages = " not even";
    //prompt and get inputs
    cout << "Please enter number1 \n";
    cin >> num1;
    cout << "Please enter number2 \n";
    cin >> num2;

    if(num1 % 2 == 0 && num2 % 2 == 0 )
    {
       messages = "even";
    }

    cout << "status \t" << messages;
    return 0;

}
