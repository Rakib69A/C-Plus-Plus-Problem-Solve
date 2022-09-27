#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *add_at_begining(struct node *head,int d)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
};
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 90;
    head->link = NULL;

    struct node *ptr  = (struct node*)malloc(sizeof(struct node));
    ptr->data = 56;
    ptr->link = NULL;

    head->link = ptr;

    int d = 3;

    head = add_at_begining(head,d);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
    return 0;
}
