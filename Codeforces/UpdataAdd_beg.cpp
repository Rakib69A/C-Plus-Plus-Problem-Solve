#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *add_beg(struct node **head,int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;

    ptr->link = *head;
    *head = ptr;
};
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 90;
    head->link = NULL;

    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = 35;
    ptr->link = NULL;

    head->link = ptr;

    int data = 2;

    add_beg(&head,data);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
    return 0;
}
