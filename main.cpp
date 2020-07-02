#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{


    int squareNumb, riceAmount = 1;
    char rice_start;
    int squareStart;

    cout << "Press s to start rice and square counter. " << endl;
            while (cin >> rice_start)
            {
                 if ('s' == rice_start)



                while (riceAmount <= 1000000000)
                {
                    cout << riceAmount << " grains of rice on" <<  squareNumb << endl;
                    squareNumb++;
                    riceAmount *=2;

                    int riceGoal1 = 1000;
                    int riceGoal2 = 1000000;
                    int riceGoal3 = 1000000000;
                    if (riceAmount == riceGoal1)
                    {
                        cout << " Youve reached the first goal " << endl;
                    }
                    if (riceAmount == riceGoal2)
                    {
                        cout << " Second goal met " << endl;
                    }
                    if (riceAmount == riceGoal3)
                    {
                        cout << "Final goal met" << endl;
                    }

                }
            }
    return 0;
}













