/*Create a class to show the arithmatic operation for 2 input integer value.*/

#include<iostream>
using namespace std;
class arithematic
{
    public: 
    int num1, num2;
    char sign;
    void getinfo();
    void calculate();
};
void arithematic::getinfo()
{
    cout<<"Enter the sign of the operation to be performed: ";
    cin>>sign;
    cout<<"Enter the numbers on which the arithemattic operation is to be performed: "; 
    cin>>num1>>num2;
}
void arithematic::calculate()
{
    switch(sign)
    {
        case '+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<"\n";
        break;

        case '-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<"\n";
        break;

        case '*':
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<"\n";
        break;


        case '/':
        cout<<num1<<" / "<<num2<<" = "<<(num1/num2)+(num1%num2)<<"\n";
        break;

        default: 
        cout<<"wrong"<<endl;
        break;
    }
}

int main()
{
    arithematic object;
    object.getinfo();
    object.calculate();
    return 0;
}