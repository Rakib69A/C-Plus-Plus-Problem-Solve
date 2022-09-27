#include<bits/stdc++.h>
using namespace std;
struct Node
{
    char data;
    unsigned freq;
    Node *left,*right;
    Node(char data,unsigned freq)
    {
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};
struct compare
{
    bool operator()(Node* l,Node* r)
    {
        return (l->freq > r->freq);
    }
};
void printCodes(struct Node* root,string str)
{
    if(!root)
        return;
    if(root->data!='$')
        cout<<root->data<<" : "<<str<<endl;

    printCodes(root->left,str+"0");
    printCodes(root->right,str+"1");
}
void HuffmanTree(char data[],int freq[],int size)
{
    struct Node *top,*left,*right;
    priority_queue<Node*, vector<Node*>, compare> minHeap;
    for(int i=0;i<size;++i)
        minHeap.push(new Node(data[i],freq[i]));
    while(minHeap.size()!=1)
    {
        left = minHeap.top();
        minHeap.pop();

        right = minHeap.top();
        minHeap.pop();

        top = new Node('$',left->freq+right->freq);

        top->left = left;
        top->right = right;

        minHeap.push(top);
    }
    printCodes(minHeap.top(),"");
}
int main()
{

    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };

    int size = sizeof(arr) / sizeof(arr[0]);

    HuffmanTree(arr,freq,size);
    return 0;
}
