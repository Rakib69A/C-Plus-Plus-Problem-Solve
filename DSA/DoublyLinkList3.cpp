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
void AddBeg(struct node **head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *current = *head;
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = *head;
    current->prev = temp;
    *head = temp;
}
void AddAtEnd(struct node **head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *current = *head;
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    while(current->next!=NULL)
        current = current->next;
    current->next = temp;
    temp->prev = current;
}
struct node *addPos(struct node *head,int data,int pos)
{
    struct node *ptr = head;
    struct node *ptr2 = NULL;
    struct node *newP = NULL;
    newP = addAtEmpty(newP,data);
    int x = 1;
    while(x!=pos-1)
    {
        ptr = ptr->next;
        x++;
    }
    if(pos==1)
    {
        AddBeg(&head,data);
    }
    else if(ptr->next==NULL)
    {
        ptr->next = newP;
        newP->prev = ptr;
    }
    else
    {
        ptr2 = ptr->next;
        ptr->next = newP;
        ptr2->prev = newP;
        newP->prev = ptr;
        newP->next = ptr2;
    }
    return head;
}
int main()
{
    struct node *head = NULL;
    struct node *ptr = NULL;
    head = addAtEmpty(head,12);
    AddBeg(&head,23);
    AddAtEnd(&head,34);
    int data = 99,pos = 2;
    head = addPos(head,data,pos);
    ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
