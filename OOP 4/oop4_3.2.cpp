/*Show the use of inline function to
A. Find the square of a number
B. To add two numbers*/

#include<iostream>
using namespace std;

inline float sum(float n, float m)
{
    return n+m;
}

int main()
{
    float number1, number2;
    cout<<"Enter two numbers: ";
    cin>>number1>>number2;
    cout<<"\nSum of the given number is: "<<sum(number1, number2);
    return 0;
}