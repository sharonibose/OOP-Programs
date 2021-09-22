/*Create a class Area, find the area of triangle, rectangle, square and circle
using switch case. 
Input() to enter the details.*/
#include<iostream>
#include<cmath>
using namespace std;

class Area
{
    public: int side, length, breadth, radius;
            char shape, t, r, s, c;
            float AREA;
    void Input()
    {
        cout<<"To calculate the area of: \nTriangle enter 't' \nRectangle enter 'r' \nSquare enter 's' \nCircle enter 'c' \n";
        cin>>shape;
        cout<<"\n";
    }

    void area()
    {
        switch(shape)
        {
            case 't':
            cout<<"Enter the side of an equilateral triangle ";
            cin>>side;
            AREA= sqrt(3)*0.25*side*side;
            cout<<"The area for the given side of an equilateral triangle is: "<<AREA;
            break;

            case 'r':
            cout<<"Enter the length and breadth respectively of an rectangle ";
            cin>>length>>breadth;
            AREA= length*breadth;
            cout<<"The area for the length and breadth of an rectangle is: "<<AREA;
            break;

            case 's':
            cout<<"Enter the side of a square ";
            cin>>side;
            AREA= side*side;
            cout<<"The area for the given side of a square is: "<<AREA;
            break;

            case 'c':
            cout<<"Enter the radius of the circle whose area is to be calculated ";
            cin>>radius;
            AREA= 3.14*radius*radius;
            cout<<"The area for the given radius of circle is: "<<AREA;
            break;

            default:
            cout<<"Invalid";
            break;
        }

    }
};

int main()
{
    Area obj;
    obj.Input();
    obj.area();
    return 0;
}