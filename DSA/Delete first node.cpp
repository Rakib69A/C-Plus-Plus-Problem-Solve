#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *add_end(struct node *ptr,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
    return temp;
};
struct node *delete_first(struct node *head)
{
    struct node *temp = head;
    head = head->link;
    free(temp);
    temp = NULL;
    return temp;
};
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data  = 1;
    head->link = NULL;
    struct node *ptr = head;
    ptr = add_end(ptr,2);
    ptr = add_end(ptr,3);
    head = delete_first(head);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
