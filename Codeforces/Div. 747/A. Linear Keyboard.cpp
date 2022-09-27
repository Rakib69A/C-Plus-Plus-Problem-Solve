#include<iostream>
using namespace std;
int main(){
    int t;
    string s1,s2;
    int a[100];
    cin>>t;
    while(t--){
        int i,j,k=0;
        cin>>s1>>s2;
        int l=s2.size();
        //cout<<s2.size()<<endl;
        if(l==1){
            cout<<0<<endl;
            continue;
        }

        for(i=0;i<l;i++){
            for(j=0;j<26;j++){
                if(s1[j]==s2[i]){
                        //cout<<s2[i]<<" ";
                //cout<<j+1<<" ";
                    a[k++]=j+1;
                    break;
                }
            }
        }
        int sum=0,n;
        for(i=0;i<k-1;i++){
            //cout<<a[i]<<" ";
            n=a[i]-a[i+1];
            if(n<0)
                n=-n;
            sum+=n;
        }
        cout<<sum<<endl;
    }
}

