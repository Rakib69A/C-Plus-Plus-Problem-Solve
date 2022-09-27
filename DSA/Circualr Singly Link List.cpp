#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node* circularSinglyLinkList(int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
};
int main()
{
    int data = 3;
    struct node *tail = NULL;
    tail = circularSinglyLinkList(data);
    cout<<tail->data<<endl;
    return 0;
}
