#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1,str2 = "hello",str3;
    cin>>str1;
    cout<<str1.size()<<endl;
    cout<<str2.size()<<endl;
    int i,j,k=0,l=0,count=0;
    for(i=0;i<str2.size();i++)
    {
        for(j=k;j<str1.size();j++)  //ahellllloou
        {
            if(str2[i]==str1[j])    //hlelo
            {
                str3[l++] = str1[j];
                count++;
                k=j++;

                break;
            }
        }
        if(j>=str1.size())
            break;
    }
    cout<<l<<endl;
    for(i=0;i<5;i++)
        cout<<str3[i];
    cout<<endl;
//    if(count==5)
//        cout<<"YES"<<endl;
//    else
//        cout<<"NO"<<endl;
    return 0;
}
