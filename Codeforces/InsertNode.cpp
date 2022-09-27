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
    {
        cout<<"List is empty"<<endl;
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        count++;
        ptr = ptr->link;
    }
    cout<<"Total node number :"<<count<<endl;
}
//void add_at_end(struct node *head,int data)
//{
//    struct node *ptr,*temp;
//    ptr = head;
//
//    temp = (struct node*)malloc(sizeof(struct node));
//    temp->data = data;
//    temp->link = NULL;
//
//    while(ptr!=NULL)
//    {
//        ptr = ptr->link;
//    }
//    ptr->link = temp;
//}
void print_data(struct node *head)
{
    if(head==NULL)
    {
        cout<<"Link list is full"<<endl;
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 89;
    current->link = NULL;
    head->link = current;

    current = (struct node*)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    //add_at_end(head,67);
    count_of_nodes(head);
    print_data(head);

    return 0;
}
