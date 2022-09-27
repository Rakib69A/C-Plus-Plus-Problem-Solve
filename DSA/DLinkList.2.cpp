#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *addEmpty(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
};
struct node *addAtEnd(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = head;
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    while(ptr->next)
        ptr = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    return head;
};
void print(struct node *head)
{
    struct node *ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}
struct node *addBeg(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head  = temp;
    return head;
};
struct node *addPos(struct node *head,int pos,int data)
{
    struct node *ptr = head;
    struct node *ptr2 = NULL;
    struct  node *newP = NULL;
    newP = addEmpty(newP,data);
    int x = 1;
    while(x!=pos)
    {
        ptr = ptr->next;
        x++;
    }
    ptr2 = ptr->next;
    ptr->next = newP;
    ptr2->prev = newP;
    newP->next = ptr2;
    newP->prev = ptr;
    return head;
};
int main()
{
    struct node *head = NULL;
    head = addEmpty(head,12);
    head = addAtEnd(head,23);
    head = addAtEnd(head,34);
    head = addAtEnd(head,45);
    head = addAtEnd(head,56);
    head = addBeg(head,11);
    head = addPos(head,3,888);
    print(head);
}
