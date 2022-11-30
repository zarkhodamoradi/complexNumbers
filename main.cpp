#include <iostream>
#include <math.h>
#include "myComplex.h"
using namespace std;
class myComplex;

//***********************************************************************************
int main()
{
    double real, imaginary;

    myComplex obj1;
    myComplex obj2;
    cout << endl;
    cout << "first complex number " << endl;
    cout << endl;

    cin >> obj1;
    cout << "------------------------------------" << endl ;
    cout << endl;

    cout << "second complex number " << endl;
    cout << endl;

    cin >> obj2;
    cout << "\n______________________________________" << endl;
    cout << endl;

    cout << "The first number is : " << obj1 << endl;

    cout << "The second number is : " << obj2 << endl;
    

    cout << "\n______________________________________\n";
    cout << endl;

    cout << "The size of first number is : " << obj1.size() << endl;
    cout << "The size of second number is : " << obj2.size() << endl;

    //______________________________________________________________
    cout << endl;
cout<<"----------information---------"<<endl ;
cout<<endl;
cout<<"     Guide '0' is False"<<endl;
cout<<"     Guide '1' is True"<<endl;
cout<<endl;

    cout <<"number1 == number2 ? " <<(obj1 == obj2) << endl;
    cout <<"number1 > number2  ? "<< (obj1 > obj2) << endl;
    cout <<"number1 < number2  ? " <<(obj1 < obj2) << endl;
    // cout << (obj1 <= obj2) << endl;
    // cout << (obj1 >= obj2) << endl;
    // cout << (obj1 != obj2) << endl;
    // cout << obj1 << endl;
    // cout << obj1++ << endl;
    // cout << obj1 << endl;
    // cout << ++obj1 << endl;
    // cout << (obj1 + obj2) << endl;
    // cout << obj1 - obj2 << endl;
}
//***********************************************************************************
