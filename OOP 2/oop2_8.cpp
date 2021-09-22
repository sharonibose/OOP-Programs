//  program to find factorial
#include<iostream>
using namespace std;

int main()
{
    int i, fact=1, n;
    cout<<"Enter the number for which you want to find the factorial for ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    cout<<"The factorial is "<<fact;
    return 0;
}