// A program to swap two numbers
#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;
    
    cout<<"Enter the values to be swapped"<<endl;
    cout<<"a: ";
    cin>>a;
     cout<<"b: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;

    cout<<"The new values are: \n"<<"a: "<<a<<"\nb: "<<b;
    return 0;
}