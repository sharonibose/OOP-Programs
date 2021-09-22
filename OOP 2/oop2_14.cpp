// a number is prime or not
#include<iostream>
using namespace std;
void prime(int num)
{
    int i,count=0;
    for(i=2;i*i<num;i++)
    {
        num%i==0;
        count=1;
    }
    if(count)
    {
        cout<<"This isn't a prime number";
    }
    else
    {
        cout<<"This is a prime number";
    }
}
int main()
{
    int num;
    cout<<"Enter any number "<<endl;
    cin>>num;
    prime(num);
    return 0;   
}


