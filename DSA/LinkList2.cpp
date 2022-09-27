#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *addEnd(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = head;
    temp->data = data;
    temp->link = NULL;
    while(ptr->link)
        ptr = ptr->link;
    ptr->link = temp;
    return head;
};
void print(struct node *head)
{
    struct node *ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->link;
    }
}
struct node *addAtEmpty(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    head = temp;
    return head;
};
struct node *addBeg(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    temp->link = head;
    head = temp;
    return head;
};
struct node *addPos(struct node *head,int pos,int data)
{
    struct node *ptr = head;
    struct node *ptr2 = (struct node*)malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;
    int x = 1;
    while(x!=pos)
    {
        ptr = ptr->link;
        x++;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
    return head;
};
struct node *del_first(struct node *head)
{
    struct node *temp = head;
    head = head->link;
    free(temp);
    temp = NULL;
    return head;
};
struct node *del_last(struct node *head)
{
    struct node *temp = head;
    while(temp->link->link)
        temp = temp->link;
    temp->link = NULL;
    return head;
};
struct node *del_pos(struct node *head,int pos)
{
    struct node *ptr = head;
    struct node *ptr2 = NULL;
    if(head==NULL)
        cout<<"List is already empty"<<endl;
    else if(pos==1)
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
    else{
        int x = 1;
        while(x!=pos)
        {
            ptr2 = ptr;
            ptr = ptr->link;
            x++;
        }
        ptr2->link = ptr->link;
        free(ptr);
        ptr = NULL;
    }
    return head;
};
struct node *reverse(struct node *head)
{
    struct node *ptr = NULL;
    struct node *ptr2 = NULL;
    while(head)
    {
        ptr = head->link;
        head->link = ptr2;
        ptr2 = head;
        head = ptr;
    }
    head = ptr2;
    return head;
};
int main()
{
    struct node *head = NULL;
    head = addAtEmpty(head,11);
    head = addEnd(head,22);
    head = addEnd(head,33);
    head = addEnd(head,44);
    head = addBeg(head,0);
    head = addPos(head,2,100);
    cout<<"After reverse the list "<<endl;
    head = reverse(head);
    print(head);
//    cout<<"Before deletion :"<<endl;
//   print(head);
//    head = del_first(head);
//    cout<<endl<<"After deleting first node :"<<endl;
//    print(head);
//    head = del_last(head);
//    cout<<endl<<"After deleting last node :"<<endl;
//    print(head);
//    head = del_pos(head,2);
//    cout<<endl<<"After deleting in a certain position :"<<endl;
//    print(head);
//    cout<<endl<<endl<<"After deletion :"<<endl;
//    print(head);
}
