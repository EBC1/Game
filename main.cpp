#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>

using namespace std;











int main()
{

    double varA;
    double varB;
    double varC;

    cout << "The quadratic equation is ax^2 + bx + c = 0" << endl;
    cout << "Enter the variables for a , b , and finally c followed by with 'Enter' after each the value is given." << endl;

    cin >> varA >> varB >> varC;

 if ( ((varB*varB)-(4*varA*varC)) <0)
    {
    	cout << "IMAGINARY ROOTS ARE INVALID" << endl;
    }
else if ( ((varB*varB)-(4*varA*varC)) == 0)

    {
        cout << "Only one root" << -(varB/ (varA));

    }
    double discRim = sqrt((varB*varB)-(4*varA*varC));

    double x1 = ((-varB)+discRim)/(2*varA);
    double x2 = ((-varB)-discRim)/(2*varA);
  cout << x1 << "         and             " << x2 << " are the roots." << endl;







/*
    if (varA == 0 && varB ==0)
    	{
    		cout << "I N V A L I D" << endl;
    	}

    if (varA == 0 && varB != 0)
    	{
    		x1 = -(varC/varB);
    		cout << "root: " << x1 << endl;

    	}
    if ((varB*varB-4*varA*varC)>0)
    	{
    		x2=(varB*varB)-(4*varA*varC);
    		x1=-varB+sqrt(x2);
    		cout << "Root: "<< x1 << endl;
    	}
*/

    return 0;


}
