#include<bits/stdc++.h>
using namespace std;
struct node `
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node* CDLink(int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = temp;
    temp->data = data;
    temp->next = temp;
    return temp;
};
int main()
{
    int data = 45;
    struct node *tail;
    tail = CDLink(data);
    cout<<tail->data<<" ";
    return 0;
}
