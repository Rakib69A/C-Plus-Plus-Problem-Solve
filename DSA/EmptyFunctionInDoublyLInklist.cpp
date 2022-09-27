#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev ;
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
    struct node *temp,*ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    ptr = head;
    while(ptr->next)
        ptr = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    return head;
};
int main()
{
    struct node *head = NULL;
    struct node *ptr = NULL;
    head = AddToEmpty(head,45);
    head = addAtBeg(head,56);
    head = addEnd(head,67);
    ptr = head;
    while(ptr)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
}
