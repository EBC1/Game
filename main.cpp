#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

    int main()
    {


        string words= "";
        vector<string> disliked = {"Broccoli", "Puree", "Cauliflower", "Cabbage"};
        sort    (begin(disliked), end(disliked));

        while (cin >> words)
        {

        if ( binary_search(begin(disliked), end(disliked),words))
        {
            cout << "INVALID" << endl;
        }
        else
        {
            cout << words << endl;
        }




        }



}





















