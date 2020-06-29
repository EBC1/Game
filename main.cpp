#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

    int main()
    {
        string dislikedWords = "Broccoli";
        for (string temp ; cin>>temp;)
        {
            if (dislikedWords != temp)
                cout << temp << '\n';
            else
                cout << "BLEEP" << '\n';


        }

        return 0;

    }




