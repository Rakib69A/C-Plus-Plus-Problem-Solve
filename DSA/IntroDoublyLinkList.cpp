#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *add_end(struct node *ptr,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
};
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head -> prev = NULL;
    head -> data = 123;
    head -> next = NULL;
    struct node *ptr = head;
    ptr = add_end(ptr,45);
    ptr = add_end(ptr,37);
    ptr = add_end(ptr,23);
    ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
