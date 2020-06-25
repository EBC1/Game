
#include <iostream>
using namespace std;

int main()
{
    double pennies;
    double nickels;
    double dimes;
    double quarters;
    double hdollar;
    double dollar;

    double cents = pennies * 1 + nickels * 5 + dimes * 10 + quarters * 25 + hdollar * 50 + dollar * 100;




    cout << " How much money are you carrying?" << endl;
    cout << " How many pennies do you have? " << endl;
    cin >> pennies;
    cout << " nickels? " << endl;
    cin >> nickels;
    cout << "what about dimes?" << endl;
    cin >> dimes;
    cout << "quarters" << endl;
    cin >> quarters;
    cout << " half dollars also ,you look like you carry half dollars...." << endl;
    cin >> hdollar;
    cout << " lastly, how many bucks? Do you  have any cash on you right now? " << endl;
    cin >> dollar;

{
    cout << "so you have $"<< cents << endl;
    cout << "Or  $" << cents * 0.01 << endl;
}





}
