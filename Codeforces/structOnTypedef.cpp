#include<iostream>
#include<cstring>
using namespace std;

typedef struct student
{
    int roll_no;
    char name[30];
    int phone_number;
}st;

int main()
{
    st p1,p2,p3;
    p1.roll_no = 1;
    strcpy(p1.name,"Rakib");
    p1.phone_number = 123443;

    p2.roll_no = 2;
    strcpy(p2.name,"Anu");
    p1.phone_number = 12300;

    p1.roll_no = 3;
    strcpy(p3.name,"Brown");
    p1.phone_number = 120000;

    cout<<"First student ::"<<endl;
    cout<<"roll_no :"<<p1.roll_no<<endl;
    cout<<"name :"<<p1.name<<endl;
    cout<<"phone_number :"<<p1.phone_number<<endl<<endl;

    cout<<"Second student ::"<<endl;
    cout<<"roll_no :"<<p2.roll_no<<endl;
    cout<<"name :"<<p2.name<<endl;
    cout<<"phone_number :"<<p2.phone_number<<endl<<endl;

    cout<<"Third student ::"<<endl;
    cout<<"roll_no :"<<p3.roll_no<<endl;
    cout<<"name :"<<p3.name<<endl;
    cout<<"phone_number :"<<p3.phone_number<<endl<<endl;



    return 0;

}

