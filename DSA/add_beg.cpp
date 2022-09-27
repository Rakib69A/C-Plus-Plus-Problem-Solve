#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
void add_beg(struct node **head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    temp->link = *head;
    *head = temp;
//return temp;
};
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 11;
    head->link = NULL;

    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = 2;
    ptr->link = NULL;

    head->link = ptr;

    add_beg(&head,45);

    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
