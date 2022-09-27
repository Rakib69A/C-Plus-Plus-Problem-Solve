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
void print(struct node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
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
struct node *addAtPos(struct node *head,int pos,int data)
{
    struct node *ptr = head;
    struct node *ptr2 = NULL;
    struct node *newP = NULL;
    newP = addAtEmpty(newP,data);
    if(pos==1)
        head = addAtBeg(head,data);
    else{

        int x =1;
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
    }
    return head;
};
struct node *del_first(struct node *head)
{
    struct node *temp = head;
    head = head->next;
    free(head->prev);
    head->prev = NULL;
    return head;
};
struct node *del_lastNode(struct node *head)
{
    struct node *temp = head;
    struct node *temp2 = NULL;
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
struct node *del_pos(struct node *head,int pos)
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
int main()
{
    struct node *head = NULL;
    head = addAtEmpty(head,11);
    head = addAtEnd(head,12);
    head = addAtEnd(head,23);
    head = addAtEnd(head,34);
    head = addAtEnd(head,45);
    head = addAtBeg(head,0);
    int pos = 3,data = 8888;
    head = addAtPos(head,pos,data);
    head = del_first(head);
    head = del_lastNode(head);
    head = del_pos(head,2);
    print(head);
}
