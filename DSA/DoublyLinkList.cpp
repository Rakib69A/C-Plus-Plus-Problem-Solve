#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 34;
    head->next = NULL;
    cout<<head->data<<endl;
}
