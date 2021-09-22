/* Write a function power() to raise a number m to a power n. The function takes a
double value for m and int value for n, and returns the result correctly. Use a
default value of 2 for n to make the function to calculate squares when this argument
is omitted. Write a main that gets the values of m and n from the user to test the
function.
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

int main()
{
    double base, answer;
    char choice;
    int exponent;
    
    cout<<"Enter a number as the base: ";
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