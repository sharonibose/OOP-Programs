// A program to check if a number is even or odd
#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a number "<<endl;
    cin>>number;

    if(number%2==0)
    {
        cout<<"This is a even number "<<endl;
    }
    else
    {
        cout<<"This is an odd number "<<endl;
    }
    return 0;
}