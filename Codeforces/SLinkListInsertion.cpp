#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node* add_beg(struct node *head,int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;

    return head;
}
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 98;
    head->link = NULL;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = 100;
    ptr->link = NULL;

    head->link = ptr;

    int data = 3;

    head = add_beg(head,3);
    ptr = head;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
