#include<iostream>
#include<string>
using namespace std;
#define EMPTY_STRING " "
//A Tree node
struct Node
{
    char ch;
    int freq;
    Node *left,*right;
};
//Function to allocate a new node
Node *getNode(char ch,int freq,Node* left,Node* right)
{
    Node* node = new Node();
    node->ch = ch;
    node->freq  = freq;
    node->left = left;
    node->right = right;

    return node;
}
//comparison object to be used to order the heap
struct comp
{
    bool operator()(const Node* l,const Node* r)const
    {
        //the height priority item has the lowest frequency
        return l->freq > r->freq;
    }
};
//Utility function to check if Huffman Tree contains only a single node
bool isLeaf(Node* root)
{
    return root->left == nullptr && root->right == nullptr;

}
//Traverse the Huffman Tree and store Huffman Codes in a map.
void encode(Node* root,string str,unordered_map<char,string> &huffmanCode)
{
    if(root == nullptr)
        return;
    //fond a leaf node
    if(isLeaf(root)){
        huffmanCode[root->ch] = (str != EMPTY_STRING)? str: "1";
    }
    encode(root->left,str+"0",huffmanCode);
    encode(root->right,str+"1",huffmanCode);
}
//Traverse the Huffman Tree and decode the encoded string
void decode(Node *root,int &index,string str)
{
    if(root == nullptr)
        return;
    //found leaf node
    if(isLeaf(root)){
        cout<<root->ch;
        return;
    }
    index++;
    if(str[index]=='0')
        decode(root->left,index,str);
    else
        decode(root->right,index,str);
}
//Builds Huffman Tree and decodes the given input text
void builtHoffmanTree(string text)
{
    //Base case : empty string
    if(text == EMPTY_STRING){
        return;
    }
    //count the frequency of appearance of each character
    //and store it in a map
    unordered_map<char,int>freq;
    for(char ch:text){
        freq[ch]++;
    }
    //create a priority queue to live nodes of the Huffman tree
    priority_queue<Node*,vector<Node*>,comp>pq;
    //create a leaf node for each character and it
    //to the priority queue.
    for(auto pair:freq){
        pq.push(getNode(pair.first,pair.second,nullptr,nullptr));
    }
    //do till there is more than one node in the queue
    while(pq.size()!=1)
    {
        //Remove the tow nodes of the highest priority
        //(the lowest frequency)form the queue
        Node* left = pq.top();
        pq.pop();
        Node* right = pq.top();
        pq.pop();

        //create a new internal node with these two nodes as children and
        //with a frequency equal to the sum of the two nodes frequencies.
        //Add the new node to the priority queue.
        int sum = left->freq+right->freq;
        pq.push(getNode('\0',sum,left,right));
    }
    //Root stores pointer to the root of Huffman Tree
    Node* root = pq.top();
    //Traverse the Huffman Tree and store Huffman Codes
    //in a map. Also, print them
    unordered_map<char,string>huffmanCode;
    encode(root,EMPTY_STRIGN,huffmanCode);

    cout<<"Huffman Codes are:"<<endl;
    for(auto pair:huffmanCode){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
    cout<<endl<<"The original string string is:"<<endl<<text<<endl;
    //print encoded string
    string str;
    for(char ch: text)
        str+=huffmanCode[ch];

    cout<<endl<<"The encoded string is:"<<endl<<str<<endl;
    cout<<endl<<"The decoded string is:"<<endl;

    if(isLeaf(root))
    {
        //special case: For input like a ,aa,aaa,etc.
        while(root->freq--)
            cout<<root->ch;
    }
    else{
        int index = -1;
        while(index <(int)str.size()-1){
            decode(root,index,str);
        }
    }

}
int main()
{
    string text = "Huffman coding is a data compression algorithm.";
    builHuffmanTree(text);
}
