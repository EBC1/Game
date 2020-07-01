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



    cout << "Enter a value." << endl;
    bool first {true};
    double value {0.0};
    double least{0.0};
    double greatest {0.0};
    string legalInput;

    while (cin >> value >> legalInput)
    {
        if (isLegalString(legalInput))
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
        else
        {
            cout << "not valid unit of measurement. Instead use 'cm','in','ft', or 'm' " << endl;
            break;
        }
    }
    return 0;
}











