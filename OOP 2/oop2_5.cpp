//A program to find the largest number among three nmbers
#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3,max;
    cout<<"Enter three numbers and this program will show you the largest among them "<<endl;
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3)
    {
          cout<<num1<<" is the largest "<<endl;
    }

     else if(num2>num1 && num2>num3)
    {
          cout<<num2<<" is the largest "<<endl;
    }

     else if(num3>num2 && num3>num1)
    {
          cout<<num3<<" is the largest "<<endl;
    }
    return 0;
}