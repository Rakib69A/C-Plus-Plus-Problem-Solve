#include<bits/stdc++.h>
using namespace std;
#define MAX 4
int top = -1;
int stact_arr[MAX];
int isFull()
{
    if(top == MAX - 1)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if(top == - 1)
        return 1;
    else
        return 0;
}
void push(int data)
{
    if(isFull())
    {
        cout<<"Stack is OverFlow"<<endl;
        return;
    }
    top = top + 1;
    stact_arr[top] = data;
}
int pop()
{
    if(isEmpty())
    {
        cout<<"Stack is UnderFlow"<<endl;
        exit(1);
    }
    int value  = stact_arr[top];
    top = top - 1;
    return value;
}
int peek()
{
    if(isEmpty())
    {
        cout<<"Stack is UnderFlow"<<endl;
        exit(1);
    }
    return stact_arr[top];
}
void print()
{
    if(top == -1)
    {
        cout<<"Stack is UnderFlow"<<endl;
        return;
    }
    for(int i = top;i>=0;i--)
    {
        cout<<stact_arr[i]<<"                       ";
    }
    cout<<endl;
}

int main()
{
    int choice,data;
    while(1)
    {
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Print the top element"<<endl;
        cout<<"4.Print all the element of the stack"<<endl;
        cout<<"5.Quit"<<endl;
        cout<<"Please Enter Your Choice :"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Enter the element to be pushed :                         "<<endl;
            cin>>data;
            push(data);
            break;
        case 2:
            data = pop();
            cout<<"Deleted element is :                                     "<<data<<endl;
            break;
        case 3:
            cout<<"The topmost element of the stack is :                    "<<peek()<<endl;
            break;
        case 4:
            print();
            break;
        case 5:
            exit(1);
        }
    }
}
