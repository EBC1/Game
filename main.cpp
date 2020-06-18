#include <iostream>

using namespace std;


int main()
 {
   int hidNum = 7;
   int guess;
    int limit = 5;
    int guessCount = 0;
    bool outOfGuesses = false;



   while(hidNum != guess){
    if (guessCount < limit) {  cout << "Enter guess: ";
        cin >> guess;
        guessCount++;
       } else {
       outOfGuesses = true;
       }

    if(outOfGuesses){
            cout << "You Lose!";
        } else {
        cout << "You Win!";

        }


   }



  return 0;

   }




