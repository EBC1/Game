#include <iostream>
#include <fstream>
#include <string>
#include namespace std;


int main()
{
    fstream fileRead;
    if(!fileRead.is_open())
        {
        cout << "file isnt open, file needs to be open in order to be read."
        }

    while( getline(fileRead.good()))
        {
        string lineFound
        getline (fileRead, lineFound, ',');
        cout << lineFound << endl;
        }





