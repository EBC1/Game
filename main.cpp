#include <iostream>
#include <math.h>
using namespace std;

int main()

    {
        double measurNumber;
        char measurAns;



        cout << "Do you want to measure in the metric system or imperial system. (Enter 'y' for yes  or 'n' for no)" << endl;
        cin >> measurAns;
        if ( 'y' == measurAns)
        {
        cout << " Good choice, nonone likes to measure like that anyways. But go ahead and enter a number and I'll convert it to Miles(m) just in case you made a mistake. " << endl;
        cin >> measurNumber;
        cout << measurNumber << " converted to miles is " << measurNumber / 1.609 << " miles"  << endl;
        }
        else if ( 'n' == measurAns)
        {
        cout << "Guess we're doing this the imperial way then... I'll go ahead and ask for a number any number incase you want to see it converted to Kilometers. (km) " << endl;
        cin >> measurNumber;
        cout << measurNumber << " converted to Kilometers is " << measurNumber * 1.609 << " kilometers" << endl;
        }
}





