#include<iostream>
#include<string.h>
using namespace std;

class student
{
    char sname[50];
    float marks[6];
    float total;
    float max_marks;

public:
    student();
    void getdata();
    void compute();
    void display();
};
student::student()
{
    strcpy(sname," ");
    for(int i=0; i<6; i++)
        marks[i]=0;
    total=0;
    max_marks=0;
}
void student::getdata()
{
    cout<<endl<<"Enter Student Name :";
    cin>>sname;
    for(int i=0; i<6; i++)
    {
        cout<<"Enter marks of "<<i+1<<" subject:";
        cin>>marks[i];
    }
    cout<<"Enter Maximum total marks";
    cin>>max_marks;
}
void student::compute()
{
    total=0;
    for(int i=0; i<6; i++)
        total+=marks[i];
}
void student::display()
{
    cout<<"Student Name:"<<sname<<endl;
    cout<<"Marks are\n";
    for(int i=0; i<6; i++)
        cout<<"Subject "<<i+1<<": "<<marks[i]<<endl;
    cout<<" -------------------\n";
    cout<<"Total :"<<total<<endl;
    cout<<" -------------------\n";
    float per;
    per=(total/max_marks)*100;
    cout<<"Percentage:"<<per;
}
int main()
{
    student obj;
    obj.getdata();
    obj.compute();
    obj.display();
    return 0;
}
