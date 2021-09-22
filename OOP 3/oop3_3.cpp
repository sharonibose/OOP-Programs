/*Create class student: input name, roll, marks for 5 subject. Input the
details using get(), Display the details using show(), show the total marks
and highest mark secured. (out of 5 subject)*/

#include<iostream>
using namespace std;
class student
{
    public: 
    int roll, mark[5];  
    string name;
    void get();
    void show();
};

void student::get()
{
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"\n";
    cout<<"Enter the roll number: ";
    cin>>roll;
    cout<<"\n";
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the marks for Subject "<<i+1<<": ";
        cin>>mark[i];
        cout<<"\n";
    }
}
void student::show()
{
    cout<<"Name: "<<name<<"\n";
    cout<<"Roll Number: "<<roll<<"\n";
    for(int i=0;i<5;i++)
    {
        cout<<"Marks for subject "<<i+1<<" "<<mark[i]<<"\n";
    }
}

int main()
{
    student object;
    object.get();
    object.show();

    return 0;   
}