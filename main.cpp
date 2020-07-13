#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{

    int number,i,j;
    cout << "Enter the number" << endl;
    cout << "NOTE: This does have a limit so dont put in number like 100000000000000000000000000000000." << endl;
    cin >> number;

    int primes[number+1];


    for(i = 2; i<=number; i++)
        primes[i] = i;

    i = 2;
    while ((i*i) <= number)
    {
        if (primes[i] != 0)
        {
            for(j=2; j<number; j++)
            {
                if (primes[i]*j > number)
                    break;
                else
                    primes[primes[i]*j]=0;
            }
        }
        i++;
    }

    for(i = 2; i<=number; i++)
    {

        if (primes[i]!=0)
            cout << primes[i] << endl;

    }

}
