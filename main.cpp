#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    const double cmperinch = 2.54;
    int length = 1;
    char unit = 0;
    cout << "Enter a length followed by the unit (c or i):\n";
    cin >> length >> unit;

    if(unit == 'i')
        {
            cout << length << "in == " << cmperinch * length  << "cm\n";
        }
    else
        {
            cout << length << "cm == " << length/cmperinch << "in\n";
        }



  }



