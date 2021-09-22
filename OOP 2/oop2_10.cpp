//program to find the power of a number
#include<iostream>
using namespace std;

int main()
{
    int i, power, final=1;
    float number;
    cout<<"Enter the number "<<endl;
    cin>>number;
    cout<<"Enter the power "<<endl;
    cin>>power;
    for(i=0;i<power;i++)
    {
        final=final*number;
    }
    cout<<"The final reult is "<<final<<endl;
    return 0;
}