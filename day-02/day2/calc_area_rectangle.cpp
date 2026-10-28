#include <iostream>
#include <string>

using namespace std;

int main()
{   //declare variables
    int area =0;
    int length = 0;
    int width = 0;
    int  perimeter = 0;
    cout <<"Please enter length \n";
    cin>> length;
    cout <<"Please enter width \n";
    cin>> width;
    //calculate area
    area = length * width;
    //calculate perimeter
    perimeter = 2 *(length + width);

    //display area and perimeter of triangle
    cout <<"Area of triangle is : \t" << area << "\n";
    cout << "Perimeter is : \t" << perimeter << "\n";
    return 0;
}
