#include<bits/stdc++.h>
using namespace std;
struct  node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *addAtEmpty(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
};
struct node *addAtEnd(struct node *head, int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = head;
    temp->prev = NULL;
    temp->data = data;
    while(ptr->next)
        ptr = ptr->next;
    temp->next = NULL;
    ptr->next = temp;
    temp->prev = ptr;
    return head;
};
void print(struct node *head)
{
    struct node *ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}
struct node *del_first(struct node *head)
{
    struct node *temp = head;
//    struct node *current = *head;
//    current = current->next;
//    *head = current;
    head = head->next;
    free(temp);
    temp = NULL;
    return head;
};
void del_last(struct node *head)
{
    struct node *temp = head;
    while(temp->next->next)
        temp = temp->next;
    free(temp->next);
    temp->next = NULL;
};
struct node *del_pos(struct node *head,int pos)
{
    struct node *temp = head;
    struct node *temp2 = NULL;
    if(pos==1)
    {
        head = del_first(head);
        return head;
    }
    else
    {

        int x = 1;
        while(x!=pos)
        {
            temp = temp->next;
            x++;
        }
        if(temp->next==NULL)
            del_last(head);
        else
        {
            temp2 = temp->prev;
            temp2->next = temp->next;
            temp->next->prev = temp2;
            free(temp);
            temp = NULL;
        }
        return head;
    }
};
int main()
{
    struct node *head = head;
    head = addAtEmpty(head,11);
    head = addAtEnd(head,12);
    head = addAtEnd(head,23);
    head = addAtEnd(head,34);
    head = addAtEnd(head,45);
    head = del_first(head);
    del_last(head);
    head = del_pos(head,2);
    print(head);
}
