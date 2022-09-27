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
    while(ptr->next!=NULL)
        ptr = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    return head;
};
void print(struct node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
struct node *reverse(struct node *head)
{
    struct node *ptr1 = head;
    struct node *ptr2 = ptr1->next;
    ptr1->next = NULL;
    ptr1->prev = ptr2;
    while(ptr2)
    {
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }
    head = ptr1;
    return head;
};
int main()
{
    struct node *head = NULL;
    head = addAtEmpty(head,11);
    head = addAtEnd(head,12);
    head = addAtEnd(head,23);
    head = addAtEnd(head,34);
    head = reverse(head);
    print(head);
}

