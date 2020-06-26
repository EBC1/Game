
#include <iostream>
#include <cmath>
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
            cout << "$     "<< howMucheuro * 1.12 << endl;
        }



    if ('y' == currency)
        {
            cout << "How much " << endl;
            cin >> howMuchyen;
            cout << "$ " << howMuchyen * 0.0093   << endl;
        }


    else ('b' == currency);
        {

            cout << "How much ";
            cin >> howMuchpound;
            cout << "$ " << howMuchpound * 1.24 << endl;
        }
}


