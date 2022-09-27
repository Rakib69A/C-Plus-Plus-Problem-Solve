#include<iostream>
using namespace std;x
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    while(1){
        a*=3;
        b*=2;
        count++;
        if(a>b)
            break;
    }
    printf("%d\n",count);
    return 0;
}
