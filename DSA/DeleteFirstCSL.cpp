
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *AddEmpty(int data)
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
struct node *addBeg(struct node *tail,int data)
{
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->data = data;
    newP->next = tail->next;
    tail->next = newP;
    return tail;
};
struct node *addAtEnd(struct node *tail,int data)
{
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->data = data;
    newP->next = NULL;

    newP->next = tail->next;
    tail->next = newP;
    tail = tail->next;
    return tail;
};
struct node *addPos(struct node *tail,int pos,int data)
{
    struct node *p;
    struct node *newP;
    newP = AddEmpty(data);
    p = tail->next;
    int x = 1;
    while(x!=pos)
    {
        p = p->next;
        x++;
    }
    newP->next = p->next;
    p->next = newP;
    if(p==tail)
        tail = tail->next;
    return tail;
};
struct node *DelFirst(struct node *tail)
{
    struct node *temp  = tail->next;
    tail->next = temp->next;
    free(temp);
    temp = NULL;
    return tail;
};
int main()
{
    struct node *tail;
    tail = AddEmpty(45);
    tail = addBeg(tail,34);
    tail = addAtEnd(tail,6);
    tail = addAtEnd(tail,56);
    tail = addPos(tail,2,888);
    tail = DelFirst(tail);
    print(tail);
    return 0;
}

