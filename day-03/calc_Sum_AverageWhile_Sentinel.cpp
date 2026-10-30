#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
   int num =0;
    int sum = 0;
    int average = 0;
    int i =0;
    // 1 prompt out side the loop and initialise and get values
    cout << "Enter number 1-5 \n"  << i;
    cin>> num;
    while (num != -1) //2 condition set it using sentinel value
    {
        cout << num <<":";
        if(num > 0 && num <= 50)
         {
            sum = sum + num;
         }
        else
         {
            cout << "We dont want negetive numeric values";
          // i--;
          }
        //3 reprompt what the user must enter
        cout << "Enter number 1-5 \n " << i ;
        cin>> num;
        i++;
    }
    average = sum/5;
    cout <<"Count" <<"\t" << "Sum"  <<"\n ";
     cout << i <<"\t" << sum  <<"\n ";
    cout << "Average: " <<fixed <<setprecision(2) <<average <<"\n";
    return 0;



}
