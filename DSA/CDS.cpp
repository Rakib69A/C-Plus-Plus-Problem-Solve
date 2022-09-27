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
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = temp;
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
    }while(p!=tail->next);
}
struct node *AddAtBeg(struct node *tail,int data)
{
    struct node *newP = AddAtEmpty(data);
    struct node *temp;
    temp = tail->next;
    newP->next = temp;
    newP->prev = tail;
    temp->prev = newP;
    tail->next = newP;
    return tail;
};
struct node *AddAtEnd(struct node *tail,int data)
{
    struct node *newP = AddAtEmpty(data);
    struct node *temp = tail->next;
    newP->next = temp;
    newP->prev = tail;
    tail->next = newP;
    tail = newP;
    return tail;
};
int main()
{
    struct node *tail;
    tail = AddAtEmpty(12);
    tail = AddAtBeg(tail,11);
    tail = AddAtEnd(tail,22);
    tail = AddAtEnd(tail,23);
    print(tail);
}
