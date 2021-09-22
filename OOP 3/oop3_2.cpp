/*Create a class with an integer data member. Include functions for input
and output in class. Count the number of times each function is called and
display it.*/

#include<iostream>
int count1=0, count2=0;
using namespace std;

class Call
{
    public: int data;
    int input()
    {
        ++count1;
        cout<<"Enter the data: ";
        cin>>data;
        return count1;
    }

    int output()
    {
        ++count2;
        cout<<"The data is: "<<data<<"\n";
        return count2;
    }
};
int main()
{
    int i, n;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>n;

    Call arr[n];

    for(i=0;i<n;i++)
    {
        arr[i].input();        
    }

    for(i=0;i<n;i++)
    {
        arr[i].output();        
    }

    cout<<"The number of time input is called: "<<count1<<"\n";
    cout<<"The number of time output is called: "<<count2;

    return 0;
}