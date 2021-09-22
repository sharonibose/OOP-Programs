/*Show the use of inline function to
A. Find the square of a number
B. To add two numbers*/

#include<iostream>
using namespace std;

inline float square(float n)
{
    return n*n;
}

int main()
{
    float number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"\nSquare of the given number is: "<<square(number);
    return 0;
}