/*5. Add two complex number using the concept of parametrized constructors.*/

#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imaginary;

    public:
    Complex();
    Complex(int, int);
    ~Complex();
    void inputNumber();
    Complex addNumbers(Complex, Complex);
};

Complex::Complex()
{
    real=0;
    imaginary=0;
}

Complex::Complex(int r, int i)
{
    r=real;
    i=imaginary;
}

Complex::~Complex()
{
    cout<<"\nDestructor called \n";
}

void Complex::inputNumber()
{
    cout<<"Enter the real part: ";
    cin>>real;
    cout<<"Enter the imaginary part: ";
    cin>>imaginary;
    cout<<"\n";
}

Complex Complex::addNumbers(Complex C1, Complex C2)
{
    Complex total;
    total.real=C1.real+C2.real;
    total.imaginary=C1.imaginary+C2.imaginary;
    cout<<"Complex Number: "<<total.real<<" + "<<total.imaginary<<"i\n";
}
int main()
{
    int real, imaginary;
    Complex obj1;
    Complex obj2;
    Complex obj3;
    obj1.inputNumber();
    obj2.inputNumber();
    obj3.addNumbers(obj1, obj2);
    return 0;
}