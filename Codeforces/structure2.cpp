#include<iostream>
using namespace std;
struct point
{
    int x;
    int y;
};
int print(struct point p)
{
    cout<<p.x<<" "<<p.y<<endl;
}
int main()
{
    struct point p1 = {23,43};
    struct point p2 = {33,44};
    print(p1);
    print(p2);
    return 0;
}
