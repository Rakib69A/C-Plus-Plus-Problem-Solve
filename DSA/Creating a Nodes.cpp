#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node  *link;
};
Node *add_beg(Node *ptr,int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
    return temp;
}
int main()
{
    Node *head = new Node();
    head->data = 1;
    head->link = NULL;

    Node *ptr = head;
    ptr = add_beg(ptr,2);
    ptr = add_beg(ptr,3);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
