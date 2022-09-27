#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *addEnd(struct node *ptr,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    temp->prev = ptr;
    return temp;
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
};
void add_pos(struct node **head,int data,int pos)
{
    struct node *ptr = *head;
    struct node *ptr2 = (struct node*)malloc(sizeof(struct node));
    ptr2->prev = NULL;
    ptr2->data = data;
    ptr2->next = NULL;
    int x = 1;
    while(x != pos-1)
    {
        ptr = ptr->next;
        x++;
    }
    ptr2->next = ptr->next;
    ptr->next = ptr2;
    ptr2->prev = ptr;
}
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 24;
    head->next = NULL;
    struct node *ptr = head;
    ptr = addEnd(ptr,56);
    ptr = addEnd(ptr,67);
    ptr = addEnd(ptr,78);
    AddBeg(&head,0);
    add_pos(&head,99,3);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
