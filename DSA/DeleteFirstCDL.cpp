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
struct node *DelFirst(struct node *tail)
{
    struct node *temp = tail->next;
    temp->next->prev = tail;
    tail->next = temp->next;
    free(temp);
    temp = NULL;
    return tail;
};
struct node *Del_Last(struct node *tail)
{
    struct node *temp = tail->prev;
    temp->next = tail->next;
    tail->next->prev = temp;
    free(tail);
    tail = temp;
    return tail;
};
struct node *del_pos(struct node *tail,int pos)
{
    struct node *temp = tail->next;
    int x = 1;
    while(x!=pos-1)
    {
        temp = temp->next;
        x++;
    }
    struct node *temp2 = temp->prev;
    temp2->next = temp->next;
    temp->next->prev = temp2;
    free(temp);
    temp = NULL;
    if(temp == tail)
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
    tail = AddPos(tail,2,888);
    cout<<"All nodes are :"<<endl;
    print(tail);
    cout<<"After deleting first node :"<<endl;
    tail = DelFirst(tail);
    print(tail);
    cout<<"After deleting Last node :"<<endl;
    tail = Del_Last(tail);
    print(tail);
    cout<<"After deleting 2nd node :"<<endl;
    tail = del_pos(tail,2);
    print(tail);
}

