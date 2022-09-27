#include<bits/stdc++.h>
using namespace std;
struct self
{
    int x;
    char c;
    struct self *ptr;
};
int main()
{
    struct self var1,var2;
    var1.x = 65;
    var1.c = 'A';
    var1.ptr = NULL;

    var2.x = 66;
    var2.c = 'B';
    var2.ptr = NULL;

    var1.ptr = &var2;
    cout<<var1.ptr->x<<" "<<var1.ptr->c<<endl;
}
