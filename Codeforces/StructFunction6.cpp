#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
};
struct point edit(struct point p)
{
    (p.x)++;
    p.y=p.y+1;
    return p;
};
void print(struct point p)
{
    cout<<p.x<<" "<<p.y<<endl;
}
int main()
{
    struct point p1 = {11,22};
    struct point p2 = {33,44};
    p1 = edit(p1);
    p2 = edit(p2);
    print(p1);
    print(p2);
    return 0;
}
