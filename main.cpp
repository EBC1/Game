#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

    int main()
    {


        vector <string> words;
        vector<string> disliked = {"Broccoli", "Puree", "Cauliflower", "Cabbage"};

        cout << "Enter a word. Proper puncuation please: " << endl;
  for (string input; cin >> input;)
    words.push_back(input);





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











