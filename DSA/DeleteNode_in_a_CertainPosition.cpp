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
    while(x!=pos)
    {
        ptr = ptr->link;
        x++;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
};
void del_first(struct node **head)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *current = *head;
    *head = current->link;
    free(temp);
    temp = NULL;
};
struct node *del_last(struct node *head)
{
    struct node *ptr = head;
    struct node *ptr2 = head;
    while(ptr->link !=NULL)
    {
        ptr2 = ptr;
        ptr = ptr->link;
    }
    ptr2->link = NULL;
    free(ptr);
    ptr = NULL;
    return head;
};
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;
    struct node *ptr = head;
    ptr = add_end(ptr,2);
    ptr = add_end(ptr,3);
    add_beg(&head,0);
    add_position(head,600,3);
    del_first(&head);
    head = del_last(head);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
