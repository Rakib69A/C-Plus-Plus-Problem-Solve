#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};
Node *add_at_end(Node *ptr,int data)
{
    Node *temp = new Node();
    temp->data = data;
    ptr->link = temp;
    return temp;
}
void add_begining(Node **head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->link = *head;
    *head = temp;
}
Node *delete_first(Node *head)
{
    Node *temp = head;
    head = head->link;
    free(temp);
    temp = NULL;
    return head;
};
int main()
{
    Node *head = new Node();
    head->data = 1;
    head->link = NULL;
    Node *ptr = head;
    ptr = add_at_end(ptr,2);
    ptr = add_at_end(ptr,3);
    add_begining(&head,0);
    head = delete_first(head);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
