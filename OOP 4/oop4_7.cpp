/* Write a function that performs the same operation as that of Exercise 4.7 but
takes an int value for m. Both the functions should have the same name. Write a
main that calls both the functions. Use the concept of function overloading.
*/
#include<iostream>
using namespace std;

double power(double m, int n=2)                                                                                                          //(m)^n
{
    int i;
    double total=1;

    for(i=1;i<=n;i++)
    {
        total=total*m;
    }
     return total;
}


double power(int m, int n=2)                                                                                                          //(m)^n
{
    int i;
    double total=1;

    for(i=1;i<=n;i++)
    {
        total=total*m;
    }
     return total;
}

int main()
{
    double base, answer;
    char choice;
    int exponent;
    
    cout<<"Enter a number as the base which is double: ";
    cin>>base;

    cout<<"Do you wish to enter the power? \nType 'y' for yes \nType 'n' for no\n";
    cin>>choice;

    if(choice=='y')
    {
        cout<<"Enter the power: ";
        cin>>exponent;
        answer=power(base, exponent);
        cout<<"Result: "<<answer;
    }
    else
    {
        answer=power(base);
        cout<<"Result: "<<answer;
    }

    cout<<"\n";


    
    cout<<"Enter a number as the base which is int: ";
    cin>>base;

    cout<<"Do you wish to enter the power? \nType 'y' for yes \nType 'n' for no\n";
    cin>>choice;

    if(choice=='y')
    {
        cout<<"Enter the power: ";
        cin>>exponent;
        answer=power(base, exponent);
        cout<<"Result: "<<answer;
    }
    else
    {
        answer=power(base);
        cout<<"Result: "<<answer;
    }

    return 0;
}