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
    struct node *temp = (struct node*)malloc(sizeof(struct node));
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
struct node *del_pos(struct node *head,int pos)
{
    struct node *temp = head;
    struct node *temp2 = head;
    int x = 1;
    while(x!=pos){
        temp = temp->next;
        x++;
    }
    temp2 = temp->prev;
    temp2->next = temp->next;
    temp->next->prev = temp2;
    free(temp);
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
    cout<<"Before Deleting :"<<endl;
    head = addAtEmpty(head,12);
    head = addAtEnd(head,23);
    head = addAtEnd(head,34);
    head = addAtEnd(head,45);
    head = addAtEnd(head,56);
    print(head);
    head = del_pos(head,3);
    cout<<endl<<"After Deleting :"<<endl;
    print(head);
}
