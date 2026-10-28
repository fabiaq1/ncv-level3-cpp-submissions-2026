#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double avg1 = (70 + 85 + 90) / 3;     // 81
    double avg2 = (70 + 85 + 90) / 3.0;   // 81.6667

int total = 245, tests = 3;
// casting to double data type
double avg3 = static_cast<double>(total) / tests;  // 81.6667
double avg4 = static_cast<double >(total / tests);  // 81

int whole = 9.99;                     // 9
cout << "average :" <<fixed << setprecision(2)<< avg3 << "\n";
cout << "average :" <<fixed << setprecision(2)<< avg4 << "\n";
    return 0;
}
