#include<bits/stdc++.h>
using namespace std;
#define CAPACITY 5
int Queue[CAPACITY];
int font = -1,rear = -1,totalIteam = 0;
bool isFull()
{
    if(totalIteam==CAPACITY)
        return true;
    else
        return false;
}
bool isEmpty()
{
    if(totalIteam==0)
        return true;
    else
        return false;
}
void enqueue(int data)
{
    if(isFull())
    {
        cout<<"Queue is full "<<endl;
        return;
    }
    rear = (rear+1)%CAPACITY;
    Queue[rear] = data;
    totalIteam++;
}
int dequeue()
{
    if(isEmpty())
    {
        cout<<"Queue is Empty!"<<endl;
        return -1;
    }
    font = (font+1)%CAPACITY;
    int  value = Queue[font];
    Queue[font] = 0;
    totalIteam--;
    return value;
}
void print()
{
    int i;
    cout<<"Queue :"<<endl;
    for(i=0;i<CAPACITY;i++)
        cout<<Queue[i]<<"   ";
    cout<<endl;
}
int main()
{
    enqueue(12);
    enqueue(23);
    enqueue(34);
    enqueue(45);
    enqueue(56);
    print();
    cout<<"DeQueue item is : "<<dequeue()<<endl;
    print();
}
