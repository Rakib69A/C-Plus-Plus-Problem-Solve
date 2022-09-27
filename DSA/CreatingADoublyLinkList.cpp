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
    temp->prev = head;
    return head;
};
struct node *createList(struct node *head)
{
    int n,data,i;
    cout<<"Enter the number of node :"<<endl;
    cin>>n;
    if(n==1)
        return head;
            cout<<"Enter element for node : 1"<<endl;
            cin>>data;
            head = addAtEmpty(head,data);
        for(i=2;i<=n;i++)
        {
            cout<<"Enter the element for node :"<<i<<endl;
            cin>>data;
            head = addAtEnd(head,data);
        }
    return head;
};
int main()
{
    struct node *head = NULL;
    struct node *ptr ;
//    head = addAtEmpty(head,12);
//    head = addAtEnd(head,23);
    head = createList(head);
    ptr = head;
    cout<<"All nodes are :"<<endl;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
