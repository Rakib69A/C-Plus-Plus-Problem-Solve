#include<bits/stdc++.h>
using namespace std;
struct student
{
    char name[50];
    int age;
    int roll_no;
    float marks;
};
void print(char name[],int age,int roll_no,int marks)
{
    cout<<"Your name is     :"<<name<<endl;
    cout<<"Your age is      :"<<age<<endl;
    cout<<"Your roll_no is  :"<<roll_no<<endl;
    cout<<"Your marks is    :"<<marks<<endl;
}
//void print(struct student s)
//{
//    cout<<s.name<<" "<<s.age<<" "<<s.roll_no<<" "<<s.marks<<endl;
//}
int main()
{
    struct student s1 ={"Rakib Hasan",23,190141,89.5};
    print(s1.name,s1.age,s1.roll_no,s1.marks);
//print(s1);
}
