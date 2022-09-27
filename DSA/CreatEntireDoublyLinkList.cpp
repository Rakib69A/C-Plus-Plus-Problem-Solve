#include<bits/stdc++.h>
using namespace std;
struct node {
    struct node *prev;
    int data;
    struct node *next;
};
struct node *addAtEmpty(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
};
struct node *addAtEnd(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head->next = temp;
    return head;
};
struct node *creatList(struct node *head)
{
    int n,data,i;
    cout<<"Enter the number of node :"<<endl;
    cin>>n;
    if(n==1)
        return head;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter the element for the node :"<<i<<endl;
        cin>>data;
        head = addAtEnd(head,data);
    }
    return head;
};
int main()
{
    struct node *head = NULL;
    struct node *ptr;
    head = addAtEmpty(head,12);
    head = addAtEnd(head,23)
    //head = creatList(head);
    ptr = head;
    cout<<"All nodes are :"<<endl;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
