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
    cout<<endl;
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
struct node *AddPos(struct node *tail,int pos,int data)
{
    struct node *newP = AddAtEmpty(data);
    struct node *temp = tail->next;
    int x = 1;
    while(x!=pos)
    {
        temp = temp->next;
        x++;
    }
    newP->prev = temp;
    newP->next = temp->next;
    temp->next = newP;
    temp->next->prev = newP;
    if(temp==tail)
        tail = tail->next;
    return tail;
};
struct node *del_pos(struct node *tail,int pos)
{
    struct node *temp = tail->next;
    struct node *temp2;
    int x = 1;
    while(x!=pos)
    {
        temp = temp->next;
        x++;
    }
    temp2 = temp->prev;
    temp2->next = temp->next;
    temp->next->prev = temp2;
    free(temp);
    temp = NULL;
    if(temp==tail)
        tail = temp2;
    return tail;
};
int main()
{
    struct node *tail;
    tail = AddAtEmpty(12);
    tail = AddAtBeg(tail,11);
    tail = AddAtEnd(tail,22);
    tail = AddAtEnd(tail,23);
    tail = AddPos(tail,3,888);
    print(tail);
    tail = del_pos(tail,4);
    print(tail);
}

