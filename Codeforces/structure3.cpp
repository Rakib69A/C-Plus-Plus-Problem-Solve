#include<iostream>
using namespace std;
struct point
{
    int x;
    int y;
};
void print(struct point *ptr)
{
    cout<<ptr->x<<" "<<ptr->y<<endl;
}
int main()
{
    struct point p1 = {11,22};
    struct point p2 = {33,44};
    print(&p1);
    print(&p2);
    return 0;
}
