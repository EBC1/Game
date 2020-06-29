#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter two integers seprated by a space."  << endl;
    double numb1, numb2;

    while (cin >> numb1>>numb2)
    {

        if (numb1 == numb2)
        {
            cout << "The numbers are equal" << endl;
        }


        else if (numb1 < numb2)
        {
            cout << "The smaller valuse is " << numb1 << endl;
            cout << "The larger value is " << numb2 <<  endl;
        }
        else
        {
            cout << "The smaller value is " << numb2 << endl;
            cout << "The larger value is " << numb1 << endl;
        }
        double diff = numb1 - numb2;
        if (diff > 0 && diff < 1.0/100 || diff < 0 && diff > -1.0/100)
        {
            cout << "The numbers are almost equal." << endl;
        }

    }
    return 0;









}







