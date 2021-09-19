//  A program to find the sum of natuaral numbers
#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"Enter the number of terms upto which you want to add all the natuaral numbers "<<endl;
    cin>>n;

    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"The total sum is "<<sum<<endl;
    return 0;
}