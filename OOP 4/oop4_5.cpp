/*Show the use of default argument to add 4 numbers*/

#include<iostream>
using namespace std;

int sum(int a=10, int b=20, int c=30, int d=40)
{
    return(a+b+c+d);
}

int main()
{
    //int sum(int a=10, int b=20, int c=30, int d=40);
    int p=5, q=15, r=25, s=35;
    cout<<"sum() = "<<sum()<<"\n";
    cout<<"sum(p, q, r, s) = "<<sum(p, q, r, s)<<"\n";
    cout<<"sum(p, q) = "<<sum(p, q)<<"\n";
    cout<<"sum(p, q, r) = "<<sum(p, q, r)<<"\n";
    cout<<"sum(p) = "<<sum(p)<<"\n";
    cout<<"sum(p, s) = "<<sum(p, s)<<"\n";
    return 0;
}