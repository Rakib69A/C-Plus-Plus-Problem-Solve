#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *add_end(struct node *ptr,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    temp->prev = ptr;
    ptr = temp;
    return temp;
};
void add_beg(struct node **head,int data)
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
void add_at_pos(struct node **head,int pos,int data)
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
}
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 45;
    head->next = NULL;
    struct node *ptr = head;
    ptr = add_end(ptr,56);
    ptr = add_end(ptr,67);
    ptr = add_end(ptr,78);
    add_beg(&head,111);
    add_at_pos(&head,3,999);
    ptr = head;
    while(ptr->next)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
