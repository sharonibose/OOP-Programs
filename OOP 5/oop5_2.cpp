/*2. Create two classes which stores distance in feet, inches and meter, 
centimeter format respectively. Write a function which compares distance in object of these classes and displays the larger one. */

#include<iostream>
using namespace std;
class meter;
class feet
{
    private: float distanceInFeet;
            float distanceInInches;
    public: void getDistance();
    friend void display(feet *, meter *);
};

class meter
{
    private: float distanceInMeter;
            float distanceInCentimeter;
    public: void getDistance();
    friend void display(feet *, meter *);
};

void feet::getDistance()
{
    cout<<"Enter the Distance in Feet: ";
    cin>>distanceInFeet;
    cout<<"Enter the Distance in Inches: ";
    cin>>distanceInInches;
    cout<<"\n";
}

void meter::getDistance()
{
    cout<<"Enter the Distance in Meter: ";
    cin>>distanceInMeter;
    cout<<"Enter the Distance in Centimeter: ";
    cin>>distanceInCentimeter;
    cout<<"\n";
}

void display(feet *obj1, meter *obj2)
{
     float total1 = (obj1->distanceInFeet * 30.48) + (obj1->distanceInInches * 2.54);
    float total2 = (obj2->distanceInMeter * 100) + obj2->distanceInCentimeter;
    if(total1 > total2)
  cout<<"\nFirst Distance Is Larger\n";
    else
  cout<<"\nSecond Distance Is Larger\n";  
}

int main()
{   
    feet obj1;
    meter obj2;
    obj1.getDistance();
    obj2.getDistance();
    display(&obj1, &obj2);
    return 0;
}