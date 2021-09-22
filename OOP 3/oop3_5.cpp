/*Create a class employee to store the details for 3 employee (name, id,
basic, hra, da). Use user defined member fuction to input the details and
display the details. Display the rank of the emplyee. Display the name of
the employee having highest and lowest salary. 
(rank=1 if 10k<salary<20k, rank=2 if 21k<salary<30k, rank=3 if salary>30k)*/

#include<iostream>
int rank1, rank2, rank3;
using namespace std;
class employee
{
    public:
    int id[3], i;
    string name[30];
    double basic[3], hra[3], da[3], salary[3];

    void get()
    {
        for(i=0;i<3;i++)
    {
        cout<<"Enter the Name of employee "<<i+1<<": ";
        cin>>name[i];
        cout<<"Enter the ID of employee "<<i+1<<": ";
        cin>>id[i];
        cout<<"Enter the basic of employee "<<i+1<<": ";
        cin>>basic[i];
        cout<<"Enter the hra of employee "<<i+1<<": ";
        cin>>hra[i];
        cout<<"Enter the da of employee "<<i+1<<": ";
        cin>>da[i];
    }
    }

    void calculate()
    {
        for(i=0;i<3;i++)
     {
        salary[i]=basic[i]+hra[i]+da[i];
     }
    }

    void rank() 
    {
        for(i=0;i<3;i++)
     {
         if(salary[i]>10000  && salary[i]<20000)
         {
            rank1=1;
            cout<<"Rank: "<<rank1<<"\t";
            cout<<name[i];
            cout<<"\n";
         }
          
         else if(salary[i]>21000  && salary[i]<30000)
         {
                rank2=2;
                cout<<"Rank: "<<rank2<<"\t";
                cout<<name[i];
                cout<<"\n";
         }
         
         else
         {
                rank3=3;
                cout<<"Rank: "<<rank3<<"\t";
                cout<<name[i];
                cout<<"\n";
         }
          
     }
    }
     void display()
     {
         for(i=0;i<3;i++)
         {
             cout<<"Name of employee: "<<name[i]<<endl;
             cout<<"ID of employee: "<<id[i]<<endl;
             cout<<"salary of employee: "<<salary[i]<<endl;      
             cout<<"\n";
         }
    }
};

 int main()
 {
     employee object1;
     object1.get();
     object1.calculate();
     object1.rank();
     object1.display();
     return 0;
 }