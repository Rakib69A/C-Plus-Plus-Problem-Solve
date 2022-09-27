#include<bits/stdc++.h>
using namespace std;
struct node {
    float co;
    int ex;
    struct node *link;
};
struct node *insert(struct node *head,float co,int ex)
{
    struct node *ptr;
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->co = co;
    newP->ex = ex;
    newP->link = NULL;
    if(head==NULL || ex>head->ex)
    {
        newP->link = head;
        head = newP;
    }
    else
    {
        ptr = head;
        while(ptr->link!=NULL && ptr->link->ex>ex)
            ptr = ptr->link;
        newP->link = ptr->link;
        ptr->link = newP;
    }
    return head;
};
struct node *create(struct node *head)
{
    int n,i,ex;
    float co;
    cout<<"Please inter the number of terms :"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the coefficient for term : "<<i+1<<endl;
        cin>>co;
        cout<<"Enter the exponent for term : "<<i+1<<endl;
        cin>>ex;
        head = insert(head,co,ex);
    }
    return head;
};
void print(struct node *head)
{
    struct node *temp = head;
    if(head == NULL)
        cout<<"No polynomial found :"<<endl;
    else
    {
        while(temp->link!=NULL)
        {
            cout<<temp->co<<"x^"<<temp->ex;
            if(temp->link!=NULL)
                cout<<"+";
            else
                cout<<endl;
        }
    }
}
int main()
{
    struct node *head;
    cout<<"Enter the Polynomial "<<endl;
    head = create(head);
    print(head);
    return 0;
}
