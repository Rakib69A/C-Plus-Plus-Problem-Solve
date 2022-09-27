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
struct node *AddBeg(struct node *head,int data)
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
struct node *addAtEnd(struct node *head,int data)
{
    struct node *ptr = head;
    struct node *ptr2 = (struct node*)malloc(sizeof(struct node));
    ptr2->prev = NULL;
    ptr2->data = data;
    ptr2->next = NULL;
    while(ptr->next)
        ptr = ptr->next;
    ptr->next = ptr2;
    ptr2->prev = ptr;
    return head;
};
struct node *addPos(struct node *head,int pos,int data)
{
    struct node *newP = NULL;
    struct node *ptr = head;
    struct node *ptr2 = NULL;
    newP = addAtEmpty(newP,data);
    int x = 1;
    while(x!=pos-1)
    {
        ptr = ptr->next;
        x++;
    }
    if(ptr->next == NULL)
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
};
int main()
{
    struct node *head = NULL;
    struct node *ptr;
    head = addAtEmpty(head,45);
    head = AddBeg(head,56);
    head = addAtEnd(head,67);
    head = addPos(head,3,888);
    ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    return 0;
}
