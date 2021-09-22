//program to reverse a number
#include<iostream>
using namespace std;

int main()
{
    int num,revnum=0,dig,input;
    cout<<"Enter the number to be checked if its a palindrome or not "<<endl;
    cin>>num;
    input=num;

    while(num>0)
    {
        dig=num%10;
        revnum=revnum*10+dig;
        num=num/10;
    }
    cout<<"reversed num is "<<revnum<<endl;
    if(input==revnum)
    {
        cout<<"The number is a palindrome!";
    }
    else
    cout<<"It's not a palindrome ;_;";

    return 0;
}