#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *addEnd(struct node *ptr,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    ptr->link  = temp;
    return temp;
};
void AddBeg(struct node **head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    temp->link = *head;
    *head  = temp;
}
void AddAtPos(struct node **head,int data,int pos)
{
    struct node *ptr = *head;
    struct node *ptr2 = (struct node*)malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;
    int x=1;
    while(x!=pos-1)
    {
        ptr = ptr->link;
        x++;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}
void del_first(struct node **head)
{
    struct node *ptr = *head;
    struct node *current = *head;
    *head = current->link;
    free(ptr);
    ptr = NULL;
}
void del_last(struct node **head)
{
    struct node *ptr = *head;
    while(ptr->link->link)
    {
        ptr = ptr->link;
    }
    ptr->link = NULL;
}
void del_pos(struct node **head,int pos)
{
    struct node *prev = *head;
    struct node *next = *head;
    if(head==NULL)
        cout<<"List is already empty"<<endl;
    else if(pos==1)
    {
        struct node *current = *head;
        *head = current->link;
        free(current);
        current = NULL;
    }
    else
    {
        int x = 1;
        while(x!=pos)
        {
            prev = next;
            next = next->link;
            x++;
        }
        prev->link = next->link;
        next->link = prev;
    }
}
struct node *reverse(struct node *head)
{
    struct node *temp = NULL;
    struct node *temp2 = NULL;
    while(head!=NULL)
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
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;
    struct node *ptr = head;
    ptr = addEnd(ptr,2);
    ptr = addEnd(ptr,3);
    AddBeg(&head,0);
//    int data = 150,pos = 3;
//    AddAtPos(&head,data,pos);
//    del_first(&head);
//    del_last(&head);
//    int dpos = 2;
//    del_pos(&head,dpos);
    head = reverse(head);
    ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
