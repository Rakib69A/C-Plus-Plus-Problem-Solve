#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
};
void print(struct point p)
{
    cout<<p.x<<" "<<p.y<<endl;
}
int main()
{
    struct point p1 = {11,33};
    struct point p2 = {44,66};
    print(p1);
    print(p2);
    return 0;
}
