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
void addAtBeg(struct node **head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *current = *head;
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = current;
    current->prev = temp;
    *head = temp;
}
void addAtEnd(struct node **head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *current = *head;
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    while(current->next)
        current = current->next;
    current->next = temp;
    temp->prev = current;
}
struct node *addAtPos(struct node *head,int data,int pos)
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
        addAtBeg(&head,data);
    else if(!ptr->next)
    {
        ptr->next = newP;
        newP->prev = ptr;
    }
    else{

        ptr2 = ptr->next;
        ptr->next = newP;
        ptr2->prev = newP;
        newP->next = ptr2;
        newP->prev = ptr;
    }
    return head;
}
struct node *del_first(struct node *head)
{
    struct node *temp = head;
    head = temp->next;
    free(temp);
    temp = NULL;
    return head;
};
int main()
{
    struct node *head = NULL;
    struct node *ptr;
    head = addAtEmpty(head,12);
    addAtBeg(&head,23);
    addAtEnd(&head,34);
    head = addAtPos(head,99,3);
    head = del_first(head);
    ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
