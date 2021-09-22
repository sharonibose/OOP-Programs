#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class Employee
{
  private:
    int code;
    string name;
    string designation;
    float salary;
     public:
    Employee(int, string, string, float);                 
    void display();
};
Employee::Employee(int ecode, string ename, string edesignation, float sal)
{
  code = ecode;
       strcpy(name, ename);
        strcpy(designation, edesignation);
        salary=sal;
}
void Employee::display()
{
   cout<<"Employee Code: "<<code;
  cout<<"\nEmployee Name:"<<name;
  cout<<"\nDesignation: "<<designation;
  cout<<"\nSalary:  "<<salary;
}
int main()
{
  int code;
  string name, designation;
  float salary;
     cout<<"Enter Employee Code: ";
     cin>>code;
     cout<<"Enter Employee Name: ";
  getline(cin, name);
  getchar();
     cout<<"Enter Employee Designation: ";
  getline(cin, designation);
     cout<<"Enter Employee Salary: ";
     cin>>salary;
     Employee ob(code, name, designation, salary);
     ob.display();
  return 0;
}