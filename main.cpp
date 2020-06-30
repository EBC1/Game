#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter a double value." << endl;
    bool first {true};
    double value {0.0};
    double least{0.0};
    double greatest {0.0};
    string unit {" "};

    while (cin >> value)
    {
        cout << value;
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











