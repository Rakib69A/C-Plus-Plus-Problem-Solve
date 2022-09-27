#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
int main()
{
    int a;
    cin>>a;
    char s[10];
    itoa(a,s,10);
    cout<<s;
}
