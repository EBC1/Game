#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double pennies = 1;
    double nickels = 5;
    double dimes = 10;
    double quarters = 25;
    double hdollar = 50;
    double dollar = 100;
    double cents = pennies + nickels + dimes + quarters + hdollar + dollar;
    int total = cents;

    double aboutTotal = round(total);

    cout << " How much money are you carrying?" << endl;
    cout << " How many pennies do you have " << endl;
cin >> pennies;
cout << " nickels? " << endl;
cin >> nickels;
cout << "what about dimes?" << endl;
cin >> dimes;
cout << "quarters" << endl;
cin >> quarters;
cout << " half dollars also ,you look like you carry half dollars...." << endl;
cin >> hdollar;
cout << " lastly, how many bucks you got? You got any cash on you right now?" << endl;
cin >> dollar;

{
cout << "so you have $"<< total << endl;
cout << "Or about $" << aboutTotal << endl;
}





}
