/*1. WAP to swap private data member of two classes.
[The classes have no relation with each other].*/

#include<iostream>
using namespace std;
class B;
class A
{
    private: 
            int x;

    public:
            void input();
            friend void swap(A *, B *);

};

class B
{
    private: 
            int y;

    public:
            void input();
            friend void swap(A *, B *);

};

void A::input()
{
    cout<<"Enter the value of an element in class A: ";
    cin>>x;
}

void B::input()
{
    cout<<"Enter the value of an element in class B: ";
    cin>>y;
}

void swap(A *obj1, B *obj2)
{
    cout<<"Before swapping: \na = "<<obj1->x<<" b = "<<obj2->y;
    int temp=0;
    temp=obj1->x;
    obj1->x=obj2->y;
    obj2->y=temp;
    cout<<"\nAfter swapping: \na = "<<obj1->x<<" b = "<<obj2->y;
}

int main()
{
    A obj1;
    B obj2;
    obj1.input();
    obj2.input();
    swap(&obj1, &obj2);

    return 0;
} 