#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{
    int riceGoal1 = 1000;
    int riceGoal2 = 1000000;
    int riceGoal3 = 1000000000;
    int riceAmount =1;
    int squareNumb = 1;
    char rice_start;
    int squareStart;

    cout << "Press s to start rice and square counter. " << endl;
            while (cin >> rice_start)
            {
                 if ('s' == rice_start)



                while (riceAmount <= 1000000000 && squareNumb <= 64)
                {
                    cout << riceAmount << " grains of rice on square " <<  squareNumb << endl;
                    squareNumb++;
                    riceAmount *=2;



                }


            }
    return 0;
}













