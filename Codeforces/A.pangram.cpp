#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char j='A';
    for(int i=0;i<n;i++)
        s[i]=toupper(s[i]);
    if(n>=26){

    for(int i=0;i<26;i++){
        if(s.find(j)!=-1)
            j++;
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
