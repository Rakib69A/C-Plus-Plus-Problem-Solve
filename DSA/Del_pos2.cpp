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
    struct node *temp = (struct node*)malloc(sizeof(struct node ));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
};
struct node *addAtEnd(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = head;
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    while(ptr->next)
        ptr = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    return head;

};
struct node *addAtBeg(struct node *head,int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
};
struct node *addAtPos(struct node *head,int pos, int data)
{
    struct node *ptr = head;
    struct node *ptr2 = NULL;
    struct node *newP ;
    newP = addAtEmpty(head,data);
    int x = 1;
    while(x!=pos-1)
    {
        ptr = ptr->next;
        x++;
    }
    ptr2 = ptr->next;
    ptr->next = newP;
    ptr2->prev = newP;
    newP->next = ptr2;
    newP->prev = ptr;
    return head;
};
struct node *Del_first(struct node *head)
{
    struct node *temp = head;
    head = head->next;
    free(temp);
    temp = NULL;
    return head;
};
struct node *Del_last(struct node *head)
{
    struct node *temp = head;
    struct node *temp2  = NULL;
    while(temp->next)
    {
        temp = temp->next;
    }
    temp2 = temp->prev;
    temp2->next = NULL;
    free(temp);
    temp = NULL;
    return head;
};
struct node *Del_pos(struct node *head,int pos)
{
    struct node *temp = head;
    struct node *temp2 = NULL;
    int x = 1;
    while(x!=pos)
    {
        temp = temp->next;
        x++;
    }
    temp2 = temp->prev;
    temp2->next = temp->next;
    temp->next->prev = temp2;
    free(temp);
    temp = NULL;
    return head;
};
void print(struct node *head)
{
    struct node *ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head = NULL;
    struct node *ptr;
    head = addAtEmpty(head,12);
    head = addAtEnd(head,23);
    head = addAtEnd(head,34);
    head = addAtEnd(head,45);
    head = addAtEnd(head,56);
    head = addAtBeg(head,0);
    head = addAtPos(head,3,99);
    cout<<"Before Deletion :"<<endl;
    print(head);
    head = Del_first(head);
    head = Del_last(head);
    head = Del_pos(head,3);
    cout<<endl<<"After Deletion :"<<endl;
    print(head);
}
