#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *addEmpty(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
};
struct node *addEnd(struct node *head, int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = head;
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    while(ptr->next)
        ptr = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    return head;
};
struct node *del_first(struct node *head)
{
    struct node *ptr = head;
    ptr = ptr->next;
    free(ptr->prev);
    ptr->prev = NULL;
};
struct node *del_last(struct node *head)
{
    struct node *temp = head;
    struct node *temp2;
    while(temp->next)
        temp = temp->next;
    temp2 = temp->prev;
    temp2->next = NULL;
    free(temp);
    temp = NULL;
    return head;
};
struct node *del_pos(struct node *head,int pos)
{
    struct node *temp = head;
    struct node *temp2 = head;
    int x = 1;
    while(x!=pos)
    {
        temp = temp->next;
        x++;
    }
    temp2 = temp->prev;
    temp2->next = temp->next;
    temp->next->prev = temp2;
    free(temp);
    temp = NULL;
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
}
int main()
{
    struct node *head = NULL;
    head = addEmpty(head,12);
    head = addEnd(head,23);
    head = addEnd(head,34);
    head = addEnd(head,45);
    head = addEnd(head,56);
    cout<<"Before deleting :"<<endl;
    print(head);
    head = del_first(head);
    head = del_last(head);
    head = del_pos(head,2);
    cout<<endl<<"After deleting :"<<endl;
    print(head);
}
