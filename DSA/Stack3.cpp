#include<bits/stdc++.h>
using namespace std;
#define MAX 4
int top = -1;
int stack_arr[MAX];
int isFull()
{
    if(top == MAX-1)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}
void push(int data)
{
    if(isFull())
    {
        cout<<"Stack OverFlow "<<endl;
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}
int pop()
{
    if(isEmpty())
    {
        cout<<"Stack is UnderFlow "<<endl;
        exit(1);
    }
    int value  = stack_arr[top];
    top = top - 1;
    return value;
}
void print()
{
    int i;
    for(i = top; i>=0; i--)
        cout<<stack_arr[i]<<" ";
    cout<<endl;
}
void print(int data)
{
    cout<<"Poped element is : "<<data<<endl;
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);

    int data;
    data = pop();
    print(data);
    print();
}
