#include<bits/stdc++.h>
using namespace std;
#define MAX 4
int stack_arr[MAX];
int top = -1;
void push(int data)
{
    if(top==MAX-1)
    {
        cout<<"Stack overflow "<<endl;
        return;
    }
    top = top+1;
    stack_arr[top] = data;
}
int pop()
{
    int value;
    if(top == -1)
    {
        cout<<"Stack Underflow"<<endl;
        exit(1);
    }
    value = stack_arr[top];
    top = top-1;
    return value;
}
void print()
{
    int i;
    if(top == -1)
    {
        cout<<"Stack Underflow"<<endl;
        return;
    }
    else if(top == MAX-1)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }
    for(i=top;i>=0;i--)
        cout<<stack_arr[i]<<" ";
    cout<<endl;
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    int value;
    value = pop();
    cout<<"Pop element is : "<<value<<endl;
    print();
    return 0;
}
