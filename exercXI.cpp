#include <iostream>
#include <math.h>
using namespace std;

int main()
{
double pennies;
double nickels;
double dimes;
double quarters;
double hdollar;
double dollar;
double cents = pennies + nickels * 5 + dimes * 10 + quarters * 25 + hdollar * 50 + dollar * 100;

double total = cents* 0.01;
double aboutTotal = round(total);
cout << " Gimme your money, how much you got " << endl;
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
