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
    struct node *ptr = (struct  node*)malloc(sizeof(struct node));
    ptr->prev = NULL;
    ptr->data = data;
    ptr->next = NULL;
    head = ptr;
    return head;
};
struct node *addAtEnd(struct node *head,int data)
{
    struct node *temp = (struct  node*)malloc(sizeof(struct node));
    struct node *ptr = head;
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    while(ptr->next)
        ptr = ptr->next;
    ptr->next = temp;
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
struct node *addBeg(struct node *head,int data)
{
    struct node *temp = (struct  node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
};
struct node *addPos(struct node *head,int pos,int data)
{
    struct node *temp = head;
    struct node *temp2 = NULL;
    struct node *newP = NULL;
    newP = addAtEmpty(head,data);
    int x = 1;
    if(pos==1)
        head = addBeg(head,data);
    else if(temp->next==NULL)
    {
        temp->next = newP;
        newP->prev = temp;
    }
    else{

        while(x!=pos-1)
        {
            temp = temp->next;
            x++;
        }
        temp2 = temp->next;
        temp->next = newP;
        temp2->prev = newP;
        newP->next = temp2;
        newP->prev = temp;
    }
    return head;
};
struct node *del_first(struct node *head)
{
    struct node *temp = head;
    head = temp->next;
    free(temp);
    temp = NULL;
    return head;
};
struct node *del_last(struct node *head)
{
    struct node *temp = head;
    while(temp->next->next)
        temp = temp->next;
    temp->next = NULL;
    free(temp->next);
    return head;
};
int main()
{
    struct node *head = NULL;
    head = addAtEmpty(head,11);
    head = addAtEnd(head,12);
    head = addAtEnd(head,23);
    head = addAtEnd(head,34);
    head = addBeg(head,0);
    cout<<"Before add in a certain position :"<<endl;
    print(head);
    int pos,data;
    cout<<endl<<"Enter the position number where do you want to add element :"<<endl;
    cin>>pos;
    cout<<endl<<"Enter the element : "<<endl;
    cin>>data;
    head = addPos(head,pos,data);
    cout<<endl<<"After add elements in a certain position :"<<endl;
    print(head);
    cout<<endl<<"After deleting first node :"<<endl;
    head = del_first(head);
    print(head);
    cout<<endl<<"After deleting last node :"<<endl;
    head = del_last(head);
    print(head);
    return 0;
}
