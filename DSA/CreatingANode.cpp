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
void add_pos(struct node *head,int data,int pos)
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
struct node *delete_firstNode(struct node *head)
{
    struct node *temp = head;
    head = head->link;
    free(temp);
    temp = NULL;
    return head;
};
struct node *delete_lastNode(struct node *head)
{
    if(head==NULL)
        cout<<"List is empty"<<endl;
    else if(head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *ptr = head;
        struct node *ptr2 = head;
        while(ptr->link != NULL)
        {
            ptr2 = ptr;
            ptr = ptr->link;
        }
        ptr2->link = NULL;
        free(ptr);
        ptr = NULL;
    }
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
    add_beg(&head,0);
    int data = 300,pos = 3;
    add_pos(head,data,pos);
    head = delete_firstNode(head);
    head = delete_lastNode(head);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
