#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct  node *addAtEnd(struct node *ptr,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while(ptr->link)
        ptr = ptr->link;
    ptr->link = temp;
    return ptr;
};
void addBeg(struct node **head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *current = *head;
    temp->data = data;
    temp->link = NULL;
    temp->link = (*head);
    (*head) = temp;
};
print(struct node *ptr)
{
    while(ptr)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->link;
    }
};
void addAtPos(struct node **head,int pos,int data)
{
    struct node *ptr = *head;
    struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
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
};
void del_first(struct node **head)
{
    struct node *temp = *head;
    struct node *current = *head;
    (*head)= (*head)->link;
    free(temp);
    temp = NULL;
};
void del_last(struct node *head)
{
    struct node *temp = head;
    while(temp->link->link)
        temp = temp->link;
    temp->link = NULL;
};
void del_Pos(struct node **head,int pos)
{
    struct node *ptr = *head;
    struct node *ptr2 = NULL;
    int x = 1;
    while(x!=pos)
    {
        ptr2 = ptr;
        ptr = ptr->link;
        x++;
    }
    ptr2->link = ptr->link;
    free(ptr);
    ptr = NULL;
};
struct node *reverse(struct node *head)
{
    struct node *temp = NULL;
    struct node *temp2 = NULL;
    while(head)
    {
        temp2 = head->link;
        head->link = temp;
        temp = head;
        head = temp2;
    }
    head = temp;
    return head;
};
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 11;
    head->link = NULL;
    struct node *ptr = head;
    ptr = addAtEnd(ptr,12);
    ptr = addAtEnd(ptr,23);
    ptr = addAtEnd(ptr,34);
    ptr = addAtEnd(ptr,45);
    addBeg(&head,0);
    int pos = 3,data = 888;
    addAtPos(&head,pos,data);
    del_first(&head);
    del_last(head);
    del_Pos(&head,2);
    head = reverse(head);
    ptr = head;
    print(ptr);
}
