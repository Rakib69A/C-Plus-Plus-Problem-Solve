#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *AddToEmpty(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
};
struct node *addAtBeg(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
};
struct node *addEnd(struct node *head,int data)
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
struct node *addAfterPos(struct node *head,int data,int pos)
{
    struct node *temp = head;
    struct node *newP = NULL;
    struct node *temp2 = NULL;
    newP = AddToEmpty(newP,67);
    int x = 1;
    while(x!=pos-1)
    {
        temp = temp->next;
        x++;
    }
    if(!temp->next)
    {
        temp->next = newP;
        newP->prev = temp;
    }
    else{

        temp2 = temp->next;
        temp->next = newP;
        temp2->prev = newP;
        newP->prev = temp;
        newP->next = temp2;
    }
    return head;

};
int main()
{
    struct node *head = NULL;
    struct node *ptr = NULL;
    head = AddToEmpty(head,12);
    head = addAtBeg(head,23);
    head = addEnd(head,34);
    head = addAfterPos(head,56,4);
    ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
