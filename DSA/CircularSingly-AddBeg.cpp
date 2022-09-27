#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *addAtEmpty(int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
};
void print(struct node *tail)
{
    struct node *p = tail->next;
    do
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    while(p!=tail->next);
}
struct node *addAtBeg(struct node* tail,int data)
{
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->data = data;
    newP->next = tail->next;
    tail->next = newP;
    return tail;
};
int main()
{
    struct node *tail;
    tail = addAtEmpty(45);
    tail = addAtBeg(tail,34);
    print(tail);
    return 0;
}
