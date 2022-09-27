#include<iostream>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int count=0,len=str1.size()-1;
    for(int i=0;i<str1.size();i++)
    {
        if(str1[i]==str2[len])
        {
            len--;
            count++;
        }
    }
    if(count==str1.size())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
