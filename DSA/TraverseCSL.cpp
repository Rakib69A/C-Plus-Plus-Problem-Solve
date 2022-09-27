#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *AddAtEmpty(int data)
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
    }while(p!=tail->next);
}
struct node *AddBeg(struct node *tail,int data)
{
    struct node *newP = (struct node *)malloc(sizeof(struct node));
    newP->data = data;
    newP->next = tail->next;
    tail->next = newP;
    return tail;
};
struct node *AddAtEnd(struct node *tail,int data)
{
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->data = data;
    newP->next = tail->next;
    tail->next = newP;
    tail = tail->next;
    return tail;
};
int main()
{
    struct node *tail;
    tail = AddAtEmpty(45);
    tail = AddBeg(tail,34);
    tail = AddAtEnd(tail,6);
    tail = AddAtEnd(tail,56);
    print(tail);
    return 0;
}
