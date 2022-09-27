#include<bits/stdc++.h>
using namespace std;
struct charset
{
    char s;
    int i;
};
void KeyValue(char* s,int* i)
{
    scanf("%c %d",s,i);
}
int  main()
{
    int j;
    struct charset cs;
    KeyValue(&cs.s,&cs.i);
    cout<<cs.s<<" "<<cs.i<<endl;
    return 0;
}
