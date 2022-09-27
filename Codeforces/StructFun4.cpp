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
    struct point p1 = {12,32};
    struct point p2 = {88,99};
    print(p1);
    print(p2);
    return 0;
}
