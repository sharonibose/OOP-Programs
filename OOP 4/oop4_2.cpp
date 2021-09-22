 /*C++ program to find the area of various geometrical shapes by function overloading*/
#include<iostream>
using namespace std;

float area(float lenght, float breadth)
{
    return lenght*breadth;
}

float area(int radius)
{
    return 3.14*radius*radius;
}


float area(int height, int base)
{
    return 0.5*height*base;
}

float area(float side)
{
    return side*side;
}

int main()
{
    float Area, lenght, breadth, side;
    int height, base, radius;

    cout<<"Enter the value of lenght and breadth of a rectangle respectively: \n";
         cin>>lenght>>breadth;
         Area=area(lenght,breadth);
         cout<<"The area of the rectangle is: "<<Area<<"\n";

         cout<<"Enter the value of radius of a circle respectively: \n";
         cin>>radius;
         Area=area(radius);
         cout<<"The area of the circle is: "<<Area<<"\n";

         cout<<"Enter the base and height of a triangle respectively: \n";
         cin>>base>>height;
         Area=area(base,base);
         cout<<"The area of the triangle is: "<<Area<<"\n";

         cout<<"Enter the value of side of a square respectively: \n";
         cin>>side;
         Area=area(side);
         cout<<"The area of the square is: "<<Area<<"\n";
         
    return 0;
}