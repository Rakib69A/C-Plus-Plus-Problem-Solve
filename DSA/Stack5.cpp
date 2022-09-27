#include<bits/stdc++.h>
using namespace std;
#define MAX 5
int first = -1;
int stack_arr[MAX];
void push(int data)
{
    int i;
    first += 1;
    for(i=first;i>0;i--)
        stack_arr[i] = stack_arr[i-1];
    stack_arr[0] = data;
}
void print()
{
    if(first == -1)
    {
        cout<<"Stack is UnderFlow"<<endl;
        return;
    }
    for(int i = 0;i<=first;i++)
    {
        cout<<stack_arr[i]<<"    ";
    }
    cout<<endl;
}
int main()
{
    push(50);
    push(60);
    push(70);
    print();
}
