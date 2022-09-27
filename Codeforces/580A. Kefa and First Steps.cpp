#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N],count[N]={0},j=0,max=0;
    for(int i=0;i<N;i++)
        cin>>A[i];
    for(int i=0;i<N-1;i++)
    {
        if(A[i]<=A[i+1])
            count[j]++;
        else
            j++;
    }
    for(int i=0;i<N;i++)
    {
        if(count[i]>max)
            max=count[i];
    }
    cout<<max+1<<endl;
    return 0;
}
