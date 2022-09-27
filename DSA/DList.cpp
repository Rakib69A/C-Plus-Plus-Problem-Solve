#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *addAtEmpty(struct node *head,int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
};
struct node *addAtEnd(struct node *head,int data)
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
struct node *createList(struct node *head)
{
    int n,data,i;
    cout<<"Enter the number of node : "<<endl;
    cin>>n;
    if(n==1)
        return head;
    cout<<"Enter element for the node : 1"<<endl;
    cin>>data;
    head = addAtEmpty(head,data);
    for(i=2;i<=n;i++)
    {
        cout<<"Enter element for node : "<<i<<endl;
        cin>>data;
        head = addAtEnd(head,data);
    }
    return head;
};
int main()
{
    struct node *head = NULL;
    struct node *ptr;
//    head = addAtEmpty(head,12);
//    head = addAtEnd(head,34);
    head = createList(head);
    cout<<"All the nodes are :"<<endl;
    ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
