#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *CircularSingly(int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
};
int main()
{
    int data = 34;
    struct node *tail;
    tail = CircularSingly(data);
    cout<<tail->data<<" ";
    return 0;
}
