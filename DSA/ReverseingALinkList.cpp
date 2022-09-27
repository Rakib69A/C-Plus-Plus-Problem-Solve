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
    temp -> data = data;
    temp -> link = NULL;
    ptr -> link = temp;
    return temp;
};
struct node *reverse(struct node *head)
{
    struct node *prev = NULL;
    struct node *next = head;
    while(head)
    {
        next = next->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head =prev;
    return head;
};
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head -> data = 1;
    head -> link = NULL;
    struct node *ptr = head;
    ptr = add_end(ptr,2);
    ptr = add_end(ptr,3);
    head = reverse(head);
    ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
