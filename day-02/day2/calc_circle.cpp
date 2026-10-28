#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
// calculating area
using namespace std;
int main()
{
    // variable declaration
    const double pi = 3.14;
    double area = 0;
    double radius = 0;

    cout << "Enter radius of area \n";
    cin >> radius;
    int rad= pow(radius,2);
    area = pi* rad;
    cout << " The area of a circle is: \t " << fixed << setprecision(2) << area << "\n";

    return 0;


}
