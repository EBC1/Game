#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>
using namespace std;

double unitConvToM (double orgVal , string unit)
{
    if ( "m" == unit)
    {
        return orgVal;
    }

    else if ("cm" == unit)
    {
        return orgVal * 0.01;
    }
    else if ("ft" == unit)
    {
        return orgVal * 0.3048;
    }
    else if ( "in" == unit)
    {
        return orgVal * 0.0254;
    }
    else
    {
        throw invalid_argument  ("invalid unit");
    }





}



int main()
{






}
