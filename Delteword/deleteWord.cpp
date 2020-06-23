#include <iostream>
#include <string>
using namespace std;

int main()
{
cout << "Type a sentence. It can be as long as you want with as many errors as you want." << endl;

string previousWord = " ";
string currentWord;
while (cin>>currentWord) {
if(previousWord == currentWord);
cout<<"found repeated word: " << currentWord << endl;

}
}
