#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *addAtEmpty(int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
};
void print(struct node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
struct node *addAtEnd(struct node *head,int data)
{
    struct node *temp = addAtEmpty(data);
    struct node *ptr = head;
    while(ptr->next)
        ptr = ptr->next;
    ptr->next = temp;
    return head;
};
struct node *insert(struct node *head,int data)
{
    struct node *newP = addAtEmpty(data);
    struct node *ptr = head;
    int key = data;
    if(head == NULL || key<head->data)
    {
        newP->next = head;
        head = newP;
    }
    else{

        while(ptr->next!=NULL && ptr->next->data<key)
            ptr = ptr->next;
        newP->next = ptr->next;
        ptr->next = newP;
    }
    return head;
};
int main()
{
    struct node *head = NULL;
    head = addAtEmpty(24);
    head = addAtEnd(head,45);
    head = addAtEnd(head,56);
    head = addAtEnd(head,100);
    head = insert(head,75);
    print(head);
}
