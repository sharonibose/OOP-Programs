// C++ program to find quotient and remainder

#include<iostream>
using namespace std;

int main()
{
    int dividend,divisor,remainder;
    float quotient;
    cout<<"Enter a dividend and divisor is to be found "<<endl; 
    cin>>dividend>>divisor;
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    cout<<"The quotient is "<<quotient<<" and the remainder is "<<remainder;

    return 0;
}