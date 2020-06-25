
#include <iostream>
#include <math.h>
using namespace std;

int main()
    {


    cout << "Enter three numbers. (Followed with 'Enter' " <<  endl;
    double integer1, integer2, integer3;
    cin >> integer1 >> integer2 >> integer3;

    double smallest, middle, largest;

    if (integer1 < integer2)
    {
        smallest = integer1;
        largest = integer2;
    }

    else
    {
        smallest = integer2;
        largest = integer1;
    }

    if (integer3 <= smallest)
    {
        middle = smallest;
        smallest =integer3;
    }

    else if (smallest < integer3 && integer3 < largest)
    {
        middle = integer3;
    }
    else if (largest <= integer3)
    {
        middle = largest;
        largest = integer3;
    }

    cout << smallest << " , " << middle << " , " << largest << endl;

    }
