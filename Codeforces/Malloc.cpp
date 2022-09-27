#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int *ptr = (int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        cout<<"Memory is not avaiable..!!"<<endl;
        exit(1);
    }
    for(i=0;i<n;i++)
        scanf("%d",ptr+i);
    for(i=0;i<n;i++)
        cout<<*(ptr+i)<<" ";
    return 0;
}
