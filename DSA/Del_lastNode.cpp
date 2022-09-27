#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *add_end(struct node *ptr,int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
    return temp;
};
void add_beg(struct node **head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    temp->link = *head;
    *head = temp;
}
void add_position(struct node *head,int data,int pos)
{
    struct node *ptr = head;
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
    if(head==NULL)
        cout<<"List is already"<<endl;
    else
    {
        struct node *temp = *head;
        struct node *temp2 = *head;
        *head = temp2->link;
        free(temp);
        temp = NULL;
    }
};
void del_lastNode(struct node *head)
{
    struct node *ptr = head;
    while(ptr->link->link !=NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = NULL;
};
void del_position(struct node **head,int pos)
{
    struct node *current  = *head;
    struct node *previous = *head;
    if(head == NULL)
        cout<<"List is already empty"<<endl;
    else if(pos==1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else
    {
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
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;
    struct node *ptr = head;
    ptr = add_end(ptr,2);
    ptr = add_end(ptr,3);
    add_beg(&head,0);
    add_position(head,700,3);
    del_firstNode(&head);
    del_lastNode(head);
    del_position(&head,2);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
