 //program to check leap year
#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the year that is to be checked for leap year "<<endl;
    cin>>year;

    if ((year%4==0) && (year%100!=0))
    {
        cout<<"This is a leap year ";
    }
    else if (year%400==0)
    {
        cout<<"This is a leap year ";
    }
    else
    cout<<"It is not a leap year ";

    return 0;
}