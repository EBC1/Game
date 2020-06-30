#include <iostream>
#include <cmath>
using namespace std;


int main()
{

constexpr double cmtom  {0.01};
constexpr double intom { 2.54*cmtom};
constexpr double fttom {12.0*intom};
const vector<string> allowedunits {}
    cout << "Enter a double value." << endl;
    bool first {true};
    double value {0.0};
    double least{0.0};
    double greatest {0.0};
    doble currentmeters
    string measur;

    if ('cm' == unitmeasur)




    while (cin >> value>> unit)
    {
        cout << value;
        if (first == true)
        {
            first = false;
            least = value;
            greatest = value;
            cout << " is the only number inputed so far." << endl;
        }
        else if (value < least)
        {
            cout << " this is the smallest number so far" << endl;
            least = value;
        }
        else if (value > greatest)
        {
            cout << " this is the largest number by far" << endl;
            greatest = value;
        }
        else
        {
            cout << '\n';
        }
    }
    return 0;
}











