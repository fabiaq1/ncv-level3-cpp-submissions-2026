#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{   int num =0;
    int sum = 0;
    int average = 0;
    int i;
    for ( i = 1; i <= 5; ++i)
    {
        cout << "Enter number 1-5 \n";
        cin>> num;
        if(num > 0 && num <= 50)
         {
            sum = sum + num;
         }
        else
         {
            cout << "We dont want negetive numeric values";
            i--;
          }

    }
    average = sum/5;
    cout <<"Count" <<"\t" << "Sum"  <<"\n ";
     cout << i <<"\t" << sum  <<"\n ";
    cout << "Average: " <<fixed <<setprecision(2) <<average <<"\n";
    return 0;



}
