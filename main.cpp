#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{
    vector<int> riceGoals{1000, 1000000, 1000000000};

    int square{1};
    int currentRiceonSquare{1};
    int previousRiceonSquare{0};
    char rice_start;
    int squareStart;

    for (int i = 0; i < riceGoals.size(); ++i)
        {
            while (riceGoals[i] > previousRiceonSquare + currentRiceonSquare)
                {
                    cout << "Square: " << square++ << endl;
                    cout << " Grains on current square: " << currentRiceonSquare << endl;
                    cout << " Rice on previous squares: " << previousRiceonSquare << endl;
                    cout << " Total rice grans: " << previousRiceonSquare + currentRiceonSquare <<endl;

                    previousRiceonSquare += currentRiceonSquare;
                    currentRiceonSquare *= 2;

                }
        }

    cout << "Press s to start rice and square counter. " << endl;
            while (cin >> rice_start)
            {
                 if ('s' == rice_start);




            }
    return 0;
}













