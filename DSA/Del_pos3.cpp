#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *addAtEmpty(struct node *head,int data)
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
}
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
    struct node *ptr = head;
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = ptr;
    ptr->prev = temp;
    head = temp;
    return head;
};
struct node *addAtPos(struct node *head,int pos,int data)
{
    struct node *temp = head;
    struct node *temp2 = NULL;
    struct node *newP;
    newP = addAtEmpty(head,data);
    int x = 1;
    while(x!=pos-1)
    {
        temp = temp->next;
        x++;
    }
    temp2 = temp->next;
    temp->next = newP;
    temp2->prev = newP;
    newP->next = temp2;
    newP->prev = temp;
    return head;
};
int main()
{
    struct node *head = NULL;
    struct node *ptr ;
    head = addAtEmpty(head,11);
    head = addAtEnd(head,22);
    head = addAtEnd(head,33);
    head = addAtEnd(head,44);
    head = addAtEnd(head,55);
    head = addBeg(head,0);
    head = addAtPos(head,3,100);
    print(head);
    return 0;
}
