/* 
2.i.WAP to input name, roll number and marks in 5 subjects for a student, and display it.

ii. WAP to input name, roll number and marks in 5 subjects for n number of students. Write
functions to:-
a. Find total marks and percentage of all n students.
b. Display details of a student with a given roll number.
c. Display the details for all the students having percentage in a given range.
d. Sort the array in ascending order of marks.
*/
#include<iostream>
using namespace std;

struct student
{
    char name[30];
    int roll;
    float mark1, mark2, mark3, mark4, mark5;
};

int main()
{
    int n;
    cout<<"Enter the number of students whose information is to be entered "<<endl;
    cin>>n;
    cout<<"\n A program to input information of the students"<<endl<<endl;
    int i, j, totmarks[n], percentage[n], temp, roll[i];
    
    struct student stud[n];

    // a. Find total marks and percentage of all n students.


    for(i=0;i<n;i++)
    {
    cout<<"Enter your name: "<<endl;
    cin>>stud[i].name;
    cout<<"Enter your roll: "<<endl;
    cin>>stud[i].roll;
    cout<<"Enter your marks in five subjects: "<<endl;
    cin>>stud[i].mark1>>stud[i].mark2>>stud[i].mark3>>stud[i].mark4>>stud[i].mark5;

    totmarks[i]=stud[i].mark1+stud[i].mark2+stud[i].mark3+stud[i].mark4+stud[i].mark5;
    percentage[i]=(totmarks[i])/5;

     cout<<"Your name is: "<<stud[i].name<<endl<<"Your roll number is: "<<stud[i].roll<< endl<<"Your marks are: "<<endl<<stud[i].mark1<<endl<<stud[i].mark2<<endl<<stud[i].mark3<<endl<<stud[i].mark4<<endl<<stud[i].mark5<<endl;
    cout<<"Your total percentage is: "<<percentage[i]<<endl;
    }
    

    // b. display the details of a student with a given roll number.


    int checkroll;
    cout<<"Enter the roll of the student whose details are required "<<endl;
    cin>>checkroll;

    for(i=0;i<n;i++)
    {
    if (checkroll==stud[i].roll)
    {
        cout<<"The name is "<<stud[i].name<<"The marks in the five subjects are "<<endl<<stud[i].mark1<<endl<<stud[i].mark2<<endl<<stud[i].mark3<<endl<<stud[i].mark4<<endl<<stud[i].mark5<<endl;
    }
    }
    //c. Display the details for all the students having percentage in a given range
     int uprange, lowrange;
     cout<<"Enter the upper range and the lower range respectively for seeing the details of the students you want the details for: ";
     cin>>uprange>>lowrange;

     for(i=0;i<n;i++)
     {
         if(percentage[i]<uprange && percentage[i]>lowrange)
         {
             cout<<stud[i].roll<<"\n"<<stud[i].name<<"\n"<<percentage[i]<<"\n";
         }
     }

    //d Sort the array in ascending order of marks

    cout<<"The marks in ascending order are \n";
    
    for(i=0;i<n;i++)
    {
        if(totmarks[i]<totmarks[i+1])
        {
            temp=totmarks[i+1];
            totmarks[i+1]=totmarks[i];
            totmarks[i]=temp;
        }
    }
    
    for(i=0;i<n;i++)
    {
        cout<<totmarks[i]<<"\n";
    }

   return 0;
}

