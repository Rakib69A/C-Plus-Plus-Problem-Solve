#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current1 = (struct node*)malloc(sizeof(struct node));
    current1->data = 98;
    current1->link = NULL;

    head->link = current1;

    struct node *current2 = (struct node*)malloc(sizeof(struct node));
    current2->data = 90;
    current2->link = NULL;
    current1->link = current2;

    cout<<head->data<<endl;
    cout<<current1->data<<endl;
    cout<<current2->data<<endl;

    return 0;
}
