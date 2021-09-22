/*1. Overload volume(), for 3 times to find the volume for cylinder, rectangular box and cube.*/
#include<iostream>
using namespace std;

float volume(float height, float radius)
{
    return(0.5*height*radius*radius);
}

float volume(float lenght, float breadth, float height)
{
    return(lenght*breadth*height);
}

float volume(float side)
{
    return(side*side*side);
}


int main()
{
    float radius, lenght, breadth, height, side, Volume;
         cout<<"Enter the value of height and radius of a cylinder respectively: \n";
         cin>>height>>radius;
         Volume=volume(height,radius);
         cout<<"The volume of the cylinder is: "<<Volume<<"\n";

         cout<<"\nEnter the value of lenght, breadth and height of a rectangular box respectively:\n ";
         cin>>lenght>>breadth>>height;
         Volume=volume(lenght,breadth,height);
         cout<<"\nThe volume of the rectangular box is: "<<Volume<<"\n";

         cout<<"\nEnter the value of side of a cube respectively:\n ";
         cin>>side;
         Volume=volume(side);
         cout<<"\nThe volume of the cube is: "<<Volume<<"\n";
}