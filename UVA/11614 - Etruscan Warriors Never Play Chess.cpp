#include<iostream>
using namespace std;

 int main()
 {
     int t,n;
     cin>>t;
     while(t--)
     {

         cin>>n;
         int i = 0;
         int x = 0;
         while(1)
         {
             x+=1;

             if(x>n)break;
             i++;
         }
         cout<<i<<endl;
     }
     return 0;
 }
