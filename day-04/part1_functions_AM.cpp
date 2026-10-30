#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
void getNumbers(int &num1, int &num2);
void calcSum(int num1, int num2);
void calcDiff(int num1, int num2);
void calcPro(int num1,int num2);
void calcdevide(int num1,int num2);



int main()
{
    int n1, n2;
    getNumbers(n1,n2);
    calcSum(n1,n2);
    calcDiff(n1, n2);
    calcPro(n1,n2);
    calcdevide(n1,n2);

   /* cout << n1 <<  " + " << n2 <<" = "<<s<<"\n";
    cout << n1 <<  " - " << n2 <<" = "<<dif<<"\n";
    cout << n1 <<  " x " << n2 <<" = "<<pro<<"\n";
    cout << n1 <<  " / " << n2 <<" = "<<quo<<"\n";*/
    _getch();

    return 0;

}

void getNumbers(int &num1, int &num2)
{
   cout<< "Please enter two numbers: ";
   cin >> num1 >> num2;

}
void calcSum(int num1, int num2)
{
    int sum = num1 + num2;
    cout << num1 <<  "+ " << num2 <<" = "<<sum<<"\n";

}
void calcDiff(int num1, int num2)
{
    int difference = num1 - num2;
    cout << num1 <<  " - " << num2 <<" = "<<difference<<"\n";

}
void calcPro(int num1,int num2)
{
    int product = num1 * num2;
    cout << num1 <<  " x " << num2 <<" = "<<product<<"\n";

}
void calcdevide(int num1,int num2)
{
    int quotient = num1 * num2;
    cout << num1 <<  " / " << num2 <<" = "<<quotient<<"\n";

}
