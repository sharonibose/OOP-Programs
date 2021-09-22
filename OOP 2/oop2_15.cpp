//calculator
#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    char sign;
    cout<<"A program that functions as a calculator "<<endl;
    cout<<"Enter 2 numbers on which the operations are to be performed "<<endl;
    cin>>num1>>num2;
    cout<<"Enter the operation to be performed "<<endl;
    cin>>sign;

    switch(sign)
    {
        case '+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<"\n";
        break;

        case '-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<"\n";
        break;

        case '*':
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<"\n";
        break;


        case '/':
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<"\n";
        break;

        default: 
        cout<<"wrong"<<endl;
    }

    return 0;
}