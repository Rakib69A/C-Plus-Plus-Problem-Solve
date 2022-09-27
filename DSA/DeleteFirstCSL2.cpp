#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *AddAtEmpty(int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next =temp;
    return temp;
};
struct node *addAtEnd(struct node *tail,int data)
{
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->data = data;
    newP->next = tail->next;
    tail->next = newP;
    tail = tail->next;
    return tail;
};
struct node *CreateCSL(struct node *tail)
{
    int i,n,data;
    cout<<"Enter the number of the linked list : "<<endl;
    cin>>n;
    if(n==0)
        return tail;
    cout<<"Enter the Element 1 : "<<endl;
    cin>>data;
    tail = AddAtEmpty(data);
    for(i=1;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<" : "<<endl;
        cin>>data;
        tail = addAtEnd(tail,data);
    }
    return tail;
};
void print(struct node *tail)
{
    struct node *p = tail->next;
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=tail->next);
    cout<<endl;
}
struct node *DelFirst(struct node *tail)
{
    if(tail==NULL)
        return tail;
    if(tail->next==tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    struct node *temp = tail->next;
    tail->next = temp->next;
    free(temp);
    temp = NULL;
    return tail;
};
struct node *DelLast(struct node *tail)
{
    struct node *temp = tail->next;
    if(tail == NULL)
        return tail;
    if(tail->next==tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    while(temp->next!=tail)
    {
        temp = temp->next;
    }
    temp->next = tail->next;
    free(tail);
    tail = temp;
    return tail;
};
int main()
{
    struct node *tail = NULL;
    tail = CreateCSL(tail);
    cout<<"Before deleting :"<<endl;
    print(tail);
    cout<<"After deleting :"<<endl;
    tail = DelFirst(tail);
    tail = DelLast(tail);
    print(tail);
    return 0;
}

