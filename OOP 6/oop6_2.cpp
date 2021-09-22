/*Create a class ‘shape’. Derive a class Area protectedly from it. Include the
relevant data members and functions the classes. Find the area of Circle,
Triangle and Rectangle and display it.*/

#include<iostream>
using namespace std;

class Shape
{
    protected:
        int radius;
        int side;
        int lenght;
        int breadth;

    public: 
        void inputDimensions();
};

class Area : protected Shape
{
    public:
        void displayArea();
};

void Shape::inputDimensions()
{
    cout<<"Enter the Radius: ";
    cin>>radius;
    cout<<"Enter the Side: ";
    cin>>side;
    cout<<"Enter the Lenght: ";
    cin>>lenght;
    cout<<"Enter the Breadth: ";
    cin>>breadth;
}

void Area::displayArea()
{
    cout<<"Area of Circle: "<<3.14*radius*radius;
    cout<<"\nArea of Triangle: "<<side*side*0.433;
    cout<<"\nArea of Rectangle: "<<lenght*breadth;
}

int main()
{
    Area obj;
    obj.inputDimensions();
    obj.inputDimensions();
    return 0;
}