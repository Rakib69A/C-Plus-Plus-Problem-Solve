#include<bits/stdc++.h>
using namespace std;
#define MAX 5
int stack_arr[MAX];
int first = -1;
void push(int data)
{
    first += 1;
    for(int i = first;i>0;i--)
        stack_arr[i] = stack_arr[i-1];
    stack_arr[0] = data;
}
void print()
{
    for(int i = 0;i<=first;i++)
        cout<<stack_arr[i]<<"       ";
    cout<<endl;
}
int main()
{
    push(90);
    push(100);

    print();
}
