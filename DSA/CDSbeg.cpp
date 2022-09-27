#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *AddAtEmpty(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = temp;
    temp->data = data;
    temp->next = temp;
    return temp;
};
void print(struct node *tail)
{
    struct node *p = tail -> next;
    do
    {
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=tail->next);
}
struct node *AddAtBeg(struct node *tail,int data)
{
    struct node *newP = AddAtEmpty(data);
    struct node *temp = tail->next;
    if(tail==NULL)
        return tail;
    else
    {
        newP->prev = tail;
        newP->next = temp;
        tail->next = newP;
        temp->prev = newP;
        return tail;
    }
};
struct node *AddAtEnd(struct node *tail,int data)
{
    struct node *newP = AddAtEmpty(data);
    if(tail==NULL)
        return tail;
    else
    {
        struct node *temp = tail->next;
        newP->prev = tail;
        newP->next = temp;
        temp->prev = newP;
        tail->next = newP;
        tail = newP;
        return tail;
    }
};
int main()
{
    struct node *tail;
    tail = AddAtEmpty(12);
    tail = AddAtEnd(tail,23);
    tail = AddAtEnd(tail,34);
    tail = AddAtBeg(tail,11);
    print (tail);
}
