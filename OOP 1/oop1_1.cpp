
#include<iostream>
using namespace std;

struct student
{
    char name[30];
    int roll;
    float mark1, mark2, mark3, mark4, mark5;
}stud;

int main()
{
    cout<<"Enter your name: "<<endl;
    cin>>stud.name;
    cout<<"Enter your roll: "<<endl;
    cin>>stud.roll;
    cout<<"Enter your marks in five subjects: "<<endl;
    cin>>stud.mark1>>stud.mark2>>stud.mark3>>stud.mark4>>stud.mark5;
    cout<<"Your name is: "<<stud.name<<endl<<"Your roll number is: "<<stud.roll<< endl<<"Your marks are: "<<endl<<stud.mark1<<endl<<stud.mark2<<endl<<stud.mark3<<endl<<stud.mark4<<endl<<stud.mark5;
    return 0;
}