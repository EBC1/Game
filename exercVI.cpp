#include <iostream>
#include <math.h>
using namespace std;

int main()
    {
    double integer1;
    double integer2;
    double integer3;
    double smallest, middle, largest;
    cout << "Enter three numbers. One after each enter please." << endl;
    cin >> integer1 , integer2, integer3;
    if (integer1 < integer2)
    { smallest = integer1;
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
        largest = integer1;
    }

    cout << smallest << "," << middle << "," << largest << endl;

    return 0;
    }




























































