#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib> // random
#include <ctime> //time

using namespace std;
void getNumbers(int &num1, int &num2);
int calcSum(int num1, int num2);
int calcDiff(int num1, int num2);
int calcPro(int num1,int num2);
int calcdevide(int num1,int num2);



int main()
{
    char op;
    srand(time(0));
    int val1 = rand() % 50 + 1;
    int val2 = rand() % 50 + 1;

    cout <<"Enter math operator (+,-,*,/): ";
    cin>>op;

    switch(op){
    case '+':
        cout<<val1<<" + "<<val2<<" = "<<calcSum(val1,val2);
        break;
    case '-':
        cout<<val1<<" - "<<val2<<" = "<<calcDiff(val1,val2);
        break;
    case '*':
        cout<<val1<<" * "<<val2<<" = "<<calcPro(val1,val2);
        break;
    case '/':
        cout<<val1<<" / "<<val2<<" = "<<calcdevide(val1,val2);
        break;
    default:
        cout<<" Invalid operator entered!!!"<<endl;


    }
    //cout<<op;
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
int calcSum(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;

}
int calcDiff(int num1, int num2)
{
    int difference = num1 - num2;
    return difference;

}
int calcPro(int num1,int num2)
{
    int product = num1 * num2;
    return product;

}
int calcdevide(int num1,int num2)
{
    int quotient = num1 * num2;
    return quotient;

}
