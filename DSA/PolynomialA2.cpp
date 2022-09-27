#include<bits/stdc++.h>
using namespace std;
struct node
{
    float coeff;
    int expo;
    struct node *next;
};
struct node *insert(struct node *head,float coeff,int expo)
{
    struct node *ptr = head;
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->coeff = coeff;
    newP->expo = expo;
    newP->next = NULL;
    if(head == NULL || expo>head->expo)
    {
        newP->next = head;
        head = newP;
    }
    else
    {
        ptr = head;
        while(ptr->next != NULL && ptr->next->expo>expo)
            ptr = ptr->next;
        newP->next = ptr->next;
        ptr->next = newP;
    }
    return head;
};
void print(struct node *head)
{
    if(head==NULL)
        cout<<"NO POLYNOMIAL : "<<endl;
    else
    {
        struct node *temp = head;
        while(temp)
        {
            cout<<temp->coeff<<"x^"<<temp->expo;
            temp = temp->next;
            if(temp!=NULL)
                cout<<"+";
            else
                cout<<endl;
        }
    }
}
struct node *create(struct node *head)
{
    int n,i;
    float coeff;
    int expo;
    cout<<"Please enter the number of term : "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter the coefficient of term :"<<i+1<<endl;
        cin>>coeff;
        cout<<"Enter the exponent of term :"<<i+1<<endl;
        cin>>expo;
        head = insert(head,coeff,expo);
    }
    return head;
};
int main()
{
    struct node *head = NULL;
    cout<<"Enter the Polynomial :"<<endl;
    head = create(head);
    print(head);
    return 0;
}
