#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *CircularDoubly(int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = temp;
    temp->data = data;
    temp->next = temp;
    return temp;
};
int main()
{
    int data = 3;
    struct node *tail;
    tail = CircularDoubly(data);
    cout<<tail->data<<" ";
    return 0;
}
