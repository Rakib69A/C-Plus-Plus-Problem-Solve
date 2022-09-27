#include<iostream>
using namespace std;
int main()
{
    int k,n,w,total_cost=0,Answer;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        total_cost+=k*i;
    }
    Answer=total_cost-n;
    if(Answer>0)
        cout<<Answer<<endl;
    else
        cout<<0<<endl;
    return 0;
}
