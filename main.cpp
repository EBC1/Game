#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>
using namespace std;

double unitConvToM (double orgVal , string unit)
{
    if ( "m" == unit)
    {
        return orgVal;
    }

    else if ("cm" == unit)
    {
        return orgVal * 0.01;
    }
    else if ("ft" == unit)
    {
        return orgVal * 0.3048;
    }
    else if ( "in" == unit)
    {
        return orgVal * 0.0254;
    }
    else
    {
        throw invalid_argument  ("invalid unit");
    }





}



int main()
{




    string unitMeasur;
    cout << "Enter a value." << endl;
    bool first {true};
    double value {0.0};
    double userVal = value;
    double least{0.0};
    double greatest {0.0};
    string legalInput = unitMeasur;

    cout << "Enter a number and unit of measurement" << endl;
    while (cin >> value >> legalInput)
    {



                cout << value <<legalInput;
            if (first == true)
                {
                    first = false;
                    least = value;
                    greatest = value;
                    cout << " is the only value inputed so far." << endl;
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












