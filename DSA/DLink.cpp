#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *addToEmpty(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
};
struct node *AddBeg(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
};
int main()
{
    struct node *head = NULL;
    head = addToEmpty(head,23);
    head = AddBeg(head,12);
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
    return 0;
}
