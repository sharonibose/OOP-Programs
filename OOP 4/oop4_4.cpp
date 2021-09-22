/* WAP to print first N natural numbers using inline function */

#include<iostream>
using namespace std;
inline int sum(int n)
{
    int i, sum = 0;
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the number upto which the sum is to be found: ";
    cin>>n;
    cout<<"\nSum of the natural numbers: "<<sum(n);
    return 0;
}