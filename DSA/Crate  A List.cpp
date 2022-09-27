#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *add_end(struct node *ptr,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
    return temp;
};
void add_beg(struct node **head,int data,int pos)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    temp->link = *head;
    *head = temp;
}
void add_pos(struct node **head,int data,int pos)
{
    struct node *ptr = *head;
    struct node *ptr2 = (struct node*)malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;
    int x = 1;
    while(x!=pos-1)
    {
        ptr = ptr->link;
        x++;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}
void del_firstNode(struct node **head)
{
    struct node *temp = *head;
    struct node *current = *head;
    *head = current->link;
    free(current);
    current = NULL;
}
void del_lastNode(struct node *head)
{
    struct node *ptr = head;
    while(ptr->link->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = NULL;
}
void del_pos(struct node **head,int pos)
{
    struct node *previous = *head;
    struct node *current = *head;
    if(*head==NULL)
        cout<<"List is already empty"<<endl;
    else if(pos==1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else{
        int x = 1;
        while(x!=pos)
        {
            previous = current;
            current = current->link;
            x++;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}
struct node *rev(struct node *head)
{
    struct node *prev = NULL;
    struct node *next = NULL;
    while(head!=NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
};
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;
    struct node *ptr = head;
    ptr = add_end(ptr,2);
    ptr = add_end(ptr,3);
    add_beg(&head,0,3);
    //add_pos(&head,120,3);
//    del_firstNode(&head);
//    del_lastNode(head);
//    del_pos(&head,2);
    head = rev(head);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
