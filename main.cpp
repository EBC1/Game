#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int currency;
    cout <<  "What currency do you wish to transfer to dollars. (yrn for Yen , BP for British Pounds, eur for Euro)." << endl;
    cin >> currency;
    if ('eur' == currency)
        {
            cout << "$     "<< currency * 1.12 << endl;
        }
    else if ('yen' == currency)
        {
            cout << "$ " << currency * 0.0093   << endl;
        }
    else ('BP' == currency);
        {
            cout << "$ " << currency * 1.24 << endl;
        }
}



  }



