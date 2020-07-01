#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int d;





int main()
{




    string unitMeasur;
    cout << "Enter a number and unit of measurement" << endl;
    double userVal;
    while (cin>> userVal>> unitMeasur)
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
                cout << userVal * 100 << "cm " << userVal * 39.3701 << "in " << userVal * 3.2084 << "ft " << endl;
            }




return 0;





    }








    return 0;
}









