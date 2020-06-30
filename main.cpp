#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

    int main()
    {

        string input;
        vector<string>words;
        vector<string>disliked = {"Broccoli", "Puree", "Cauliflower", "Cabbage"};

        cout << "Enter a word. Proper puncuation please: " << endl;
        while (cin>> words)
            words.push_back(input)
        if ( words  == disliked)
        disliked.push_back("Broccoli", "Puree", "Cauliflower", "Cabbage");


        for  (int i = 0; i < words.size(); ++i)
        {
        for (int x = 0; x < disliked.size(); ++x)
            if (words[i] == disliked[x])
            {
                words[i] = "Bleep";

            }
            cout << words[i] << endl;
        }


                    }











