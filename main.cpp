#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{


    vector<double> numbS;
    double numb;


    cout << "This program adds numbers continuously until you dont want to do that anymore " << "Enter a number" << endl;


    while(cin >> numb)
    {
        numbS.push_back(numb);
        cout << "end the program by entering  a character or anything not a number to stop and calculate the numbers entered so far." << endl;

    }

    double sum = 0.0;
    for (auto & sumDone : numbS)
        {
            sum += sumDone;
        }

    cout << "the sum is: " << sum << '\n';

    sort (numbS.begin() , numbS.end());

    cout << "least " << numbS[0] << endl;
    cout << "greatest " << numbS[numbS.size()-1] << endl;
    cout << "the average between the numbers entered is... " << sum/numbS.size() << endl;



    return 0;
}












