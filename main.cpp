
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int howMuchpound;
    int howMuchyen;
    int howMucheuro;
    char currency;
    cout <<  "What currency do you wish to transfer to dollars. (y for Yen , b for British Pounds, e for Euro)." << endl;
    cin >> currency;



    if ('e' == currency)
        {
            cout << "How much" << endl;
            cin  >> howMucheuro;
            cout << "$ "<< howMucheuro * 1.12 << endl;
        }



    else if ('y' == currency)
        {
            cout << "How much " << endl;
            cin >> howMuchyen;
            cout << "$ " << howMuchyen * 0.0093   << endl;
            cout << "Or that can be rounded to " << round(howMuchyen * 0.0093) << endl;
        }


    else if ('b' == currency)
        {

            cout << "How much ";
            cin >> howMuchpound;
            cout << "$ " << howMuchpound * 1.24 << endl;
        }

    else
        cout << "I am unfamiliar with the currency:  " << currency << endl;




}



