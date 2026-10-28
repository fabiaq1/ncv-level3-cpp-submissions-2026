#include <iostream>
#include <string>

using namespace std;
int main()
{
    int time =0;
    int hour =0;
    int minutes =0;

    cout << " Please enter time in minutes " <<"\n";
    cin >> time;
    hour = time/60;
    minutes = time % 60;
    cout <<hour << ": hrs \t"  << minutes << "  minutes" << "  \n";

return 0;
}
