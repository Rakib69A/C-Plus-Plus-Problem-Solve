#include<bits/stdc++.h>
using namespace std;
#define MAX 4
int top = -1;
int stack_arr[MAX];
void push(int data)
{
    if(top == MAX-1)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }
    top = top+1;
    stack_arr[top] = data;
}
void print()
{
    int i;
    if(top == -1)
    {
        cout<<"Stack Underflow"<<endl;
        exit(1);
    }
    for(i=top;i>=0;i--)
        cout<<stack_arr[i]<<" ";
}
int pop()
{
    if(top==-1)
    {
        cout<<"Stack is UnderFlow "<<endl;
        exit(1);
    }
    int value = stack_arr[top];
    top = top - 1;
    return value;
}
int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data = pop();
    cout<<"Poped element is : "<<data<<endl;
    print();
}

