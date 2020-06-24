#include <iostream>

using namespace std;
int main()

    {
    double age;
    string first_name;
    string answEr1;
    string haveyouseen;
    string seenyes;
    string seenno;
    string friendName;
    char friendGen;
    string realFriend;
    char ageAns;
    cout << "Whats your name? Preferably your first name." << endl;
    cin  >> first_name;
    cout << "Hi, " << first_name << ". My name is 17143787943564093569643975795640956430956395624905643976651964065-57. Nice to meet you. Say, how are you doing?" << endl;
    cin  >> answEr1;
    cout << "Are you sure you're  " << first_name << " ? You dont look or sound like it. If you really are " << first_name << " then answer me this..." << endl;
    cout << "Do you remember our friend? If so tell me their name." << endl;
    cin  >> friendName;
    cout << "Interesting.... well since you know " << friendName << " are they male or female?" << endl;
    cout << "Enter 'm' if the friend is male or 'f' if the friend is female" << endl;
    cin  >> friendGen;

    if ('m' == friendGen)
    {
        cout << "Oh so you know " << friendName << "? He's a cool dude. Tell him I said hi." << endl;
    }
    else if ( 'f' == friendGen)
    {
        cout << "Oh I didnt know you knew " << friendName << ". Tell her to call me next time you see her" << endl;
    }

    cout << "How old are you now?" << endl;
    cin >> age;
    cout << "Hmmmmmm... " << "So you're " << age << " huh." << endl;
    if (0 >= age || 110 <= age)
    {
        cout << "No way, you're joking right?" << endl;
    }
    if ( 12 >= age)
    {
        cout << "Next year youll be " << age + 1 << ". Thats crazy" << endl;
    }

    if (age == 17 )
    {
        cout << "Woah, you realize youll be able to vote next year right? Is it exciting to be 18 soon?" << endl;


    cout << "Enter y or n " << endl;
    cin >> ageAns;
    if ( 'y' == ageAns)
    {
    cout << " Yeah I was excited to turn 18 as well." << endl;
    }
    if ('n' == ageAns)
    {
    cout << "Understandable, with so much freedom comes a ton of responsibility as well. Kind of overwhelming at times but manageable." << endl;
    }


    }




























    }
