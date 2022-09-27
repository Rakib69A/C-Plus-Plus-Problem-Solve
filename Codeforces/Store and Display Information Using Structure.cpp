#include<iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    student s;
    cout<<"Enter the name:"<<endl;
    cin>>s.name;
    cout<<"Enter the roll number"<<endl;
    cin>>s.roll;
    cout<<"Enter the marks"<<endl;
    cin>>s.marks;

    cout<<"Name  :"<<s.name<<endl;
    cout<<"Roll  :"<<s.roll<<endl;
    cout<<"Marks :"<<s.marks<<endl;
    return 0;
}
