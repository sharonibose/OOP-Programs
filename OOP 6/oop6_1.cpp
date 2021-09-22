/*Create a class student which stores name, roll number and age of a
student. Derive a class test from student class, which stores marks in 5
subjects. Input and display the details of a student.*/

#include<iostream>
using namespace std;

class Student
{
    protected:
        string name;
        int roll;
        int age;
    public:
        void inputDetails();
        void displayDetails();

};

class Test : public Student
{
    private:
        int mark[5];
    public:
        void inputMarks();
        void displayMarks();
};

void Student::inputDetails()
{
    cout<<"Enter the Name: ";
    getline(cin, name);
    cout<<"Enter the Roll Number: ";
    cin>>roll;
    cout<<"Enter the Age: ";
    cin>>age;
}

void Student::displayDetails()
{
    cout<<"\nName: "<<name;
    cout<<"\nRoll Number: "<<roll;
    cout<<"\nAge: "<<age;
    cout<<"\n";
}

void Test::inputMarks()
{
    cout<<"\n";
    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter the Mark for Subject "<<i + 1<<": ";
        cin>>mark[i];
    }
}

void Test::displayMarks()
{
    cout<<"\n";
    for(int i = 0; i < 5; i++)
    {
        cout<<"Mark of Subject "<<i + 1<<": ";
        cout<<mark[i];
        cout<<"\n";
    }
}

int main()
{
    Test obj;
    obj.inputDetails();
    obj.inputMarks();
    obj.displayDetails();
    obj.displayMarks();
    return 0;
}