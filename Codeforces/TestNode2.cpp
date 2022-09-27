#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head)
{
    int count = 0;
    if(head==NULL)
        cout<<"This Link List is empty..!!"<<endl;
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL){
        count++;
        ptr = ptr->link;
    }
    cout<<"This Link List have "<<count<<" NODES"<<endl;
}
void print_of_data(struct node *head)
{
    if(head==NULL)
        cout<<"This Link List is empty...!!"<<endl;
    cout<<"Printing the data of the LINK LIST"<<endl;
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
void add_at_end(struct node *head,int data)
{
    struct node *ptr,*temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while(ptr->link!=NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}
int main()
{
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 90;
    head->link = NULL;

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 45;
    current->link = NULL;
    head->link = current;

    struct node *current2 = (struct node*)malloc(sizeof(struct node));
    current2->data = 4;
    current2->link = NULL;
    current->link = current2;

    cout<<head->data<<endl;
    cout<<current->data<<endl;
    cout<<current2->data<<endl;

    add_at_end(head,67);
    count_of_nodes(head);
    print_of_data(head);

    return 0;
}
