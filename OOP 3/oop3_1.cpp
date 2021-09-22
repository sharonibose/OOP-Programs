/*1. Write a c++ program to swap two numbers using
I) Call by value
II) Call by reference
III) Call by address*/


#include<iostream>
using namespace std;

class Swap
{
    public:
    int CallByValue(int a, int b);
    int CallByReference(int &a, int &b);
    int CallByAddress(int *a, int *b);
};
int Swap::CallByValue(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
     cout<<"The value of a="<<a<<" b="<<b<<"\nafter swapping";
}

int Swap::CallByReference(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
     cout<<"The value of a="<<a<<" b="<<b<<"\nafter swapping";
}

int Swap::CallByAddress(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    cout<<"The value of a="<<a<<" b="<<b<<"\nafter swapping";
}

int main()
{
    Swap object;
    int num1, num2, choice;
    cout<<"Enter the numbers to be swapped: \n";
    cin>>num1>>num2;

    cout<<"Choose the method by which you want the numbers to be swapped: "<<endl<<"1 -> CallByValue"<<endl<<"2 -> CallByReferenece"<<endl<<"3 -> CallByAddress\n";

    cin>>choice;

    switch(choice)
    {
        case 1:

        object.CallByValue(num1, num2);

        cout<<"\nValue of a: "<<num1<<" b: "<<num2;
        break;

        case 2:
        
        object.CallByReference(num1, num2);

        cout<<"\nValue of a: "<<num1<<" b: "<<num2;
        break;

        case 3:
        
        object.CallByAddress(&num1, &num2);
        
        cout<<"\nValue of a: "<<num1<<" b: "<<num2;
        break;

        default:
        cout<<"kuch bhi?";
        break;
    }

    return 0;
}