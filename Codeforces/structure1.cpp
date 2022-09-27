#include<iostream>
using namespace std;
struct student
{
    char name[50];
    int age;
    int roll_no;
    float marks;
};
int print(char name[],int age,int roll_no,float marks)
{
    cout<<name<<" "<<age<<" "<<roll_no<<" "<<marks<<endl;
}
int main()
{
    struct student s1 = {"Rakib",23,190141,80.5};
    print(s1.name,s1.age,s1.roll_no,s1.marks);
}
