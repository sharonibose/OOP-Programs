//whether a number is a palindrome or not
#include<iostream>
using namespace std;

int main()
{
    int num,rev=0,digit,input;
    cout<<"Enter a positive number ";
    cin>>num;
    input=num;
    while(num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }

    cout<<"The reverse of "<<input<<" is "<<rev<<endl;
    return 0;
}