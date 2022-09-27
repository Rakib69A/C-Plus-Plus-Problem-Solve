
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
int search(struct node *tail,int element)
{
    struct node *temp = tail->next;
    int index = 0;
    if(tail==NULL)
        return -2;
    do{
        if(temp->data == element)
            return index;
        temp = temp->next;
        index++;
    }while(temp!=tail->next);
    return -1;
};
void print(struct node *tail)
{
    struct node *p = tail->next;
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=tail->next);
}
int main()
{
    struct node *tail = NULL;
    tail = CreateCSL(tail);
    int element;
    cout<<"Enter the element which you are searching for :"<<endl;
    cin>>element;
    int index = search(tail,element);
    if(index == -1)
        cout<<"Element is not found "<<endl;
    if(index==-2)
        cout<<"Link list is empty "<<endl;
    else
        cout<<"Element "<<element<<" is at index "<<index<<endl;
    print(tail);
    return 0;
}
