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
    int j;
    int square{1};
    int currentRiceonSquare{1};
    int previousRiceonSquare{0};
    vector<int> squareGoal [3];
    int riceTotal = previousRiceonSquare + currentRiceonSquare;
    vector <int> squareReturn;
    for (int i = 0; i < riceGoals.size(); ++i)
        {

            while (riceGoals[i] >= previousRiceonSquare + currentRiceonSquare)
                {
                    cout << " Square: " << square++ << endl;
                    cout << " Grains on current square: " << currentRiceonSquare << endl;
                    cout << " Rice on previous squares: " << previousRiceonSquare << endl;
                    cout << " Total rice grans: " << previousRiceonSquare + currentRiceonSquare << endl << endl;

                    previousRiceonSquare += currentRiceonSquare;
                    currentRiceonSquare *= 2;
                    int riceTotal = previousRiceonSquare + currentRiceonSquare;


                    if (riceTotal >= riceGoals[i])
                    {
                        squareReturn.push_back(square);
                        i++;
                    }
                    if (riceTotal >= riceGoals[2] )
                    {
                        cout << "The amount of grains needed are on the respective squares " << "For 1000 grains youll have to be on " << squareReturn[0] << endl << endl;

                         cout << "For 1000000 grains youll atleast have to be on square: "<< squareReturn[1] << endl << endl;

                         cout<< "For 1000000000 grains of rice youll need to be on at least square: " << squareReturn[2]  << endl << endl;

                         cout<< "Those are all the needed squares for reaching the different rice grain goals."  <<  squareReturn[3] << endl << endl;
                        break;
                    }


                }







        }

    return 0;
}













