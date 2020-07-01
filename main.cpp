#include <iostream>
#include <cmath>
using namespace std;

bool isLegalString(string input)
{


    if (input == "cm" || input == "in" || input =="m" || input == "ft")
        return true;
    else
        return false;

}



int main()
{














    string unitMeasur;
    double userVal;
    cout << "Enter a value." << endl;
    bool first {true};
    double value = userVal; {0.0};  //Whats wrong here?
    double least{0.0};
    double greatest {0.0};
    string legalInput = unitMeasur;

    cout << "Enter a number and unit of measurement" << endl;
    while (cin >> value >> legalInput)
    {

        if (unitMeasur == "cm")
            {
                cout << userVal * 0.01 << "m"<< endl;
            }
        else if (unitMeasur == "in")
            {
                cout << userVal* 0.0254<< "m" << endl;
            }
        else if (unitMeasur == "ft")
            {
                cout << userVal * 0.3048 << "m" << endl;
            }
        else if (unitMeasur == "m")
            {
                cout << userVal * 100 << "cm " << endl;

                cout << userVal * 39.3701 << "in " << endl;

                cout << userVal* 3.2084 << "ft " << endl;
            }


        if (isLegalString(legalInput))
            {


                cout << userVal <<legalInput;
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
        else
        {
            cout << "not valid unit of measurement. Instead use 'cm','in','ft', or 'm' " << endl;
            break;
        }

    return 0;
    }
}











