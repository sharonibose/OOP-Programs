/*6. Wap which print the object number whenever we create object.*/

#include<iostream>
using namespace std;

class hello
{
    public: void sayHello()
    {
        cout<<"hello";
    }
};
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    hello obj[n];
    for(int i=0;i<n;i++)
    {
        obj[i].sayHello();
        cout<< i<<"\n";
    }
    return 0;
}