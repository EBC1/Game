#include <iostream>
#include <cmath>
using namespace std;


int square(int x)
{
    int result =- 0;
    for (int i = 0; i < x; ++i)
    {
        result += x;
    }

    return result;

}




 int main()
 {


    for(int i = 0; i<10000000000000000000000000000; i+=2)
        cout << i << '\t' << square(i) << endl;
    return 0;
}


