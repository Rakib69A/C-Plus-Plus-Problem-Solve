#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head)
{
    int count=0;
    if(head==NULL)
    {
        cout<<"Link list is empty"<<endl;
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        count++;
        ptr = ptr->link;
    }
    cout<<count<<endl;
}
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 98;
    head->link = NULL;

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link = current;

    current = (struct node*)malloc(sizeof(struct node));
    current->data = 95;
    current->link = NULL;
    head->link->link = current;

    count_of_nodes(head);

    return 0;
}
