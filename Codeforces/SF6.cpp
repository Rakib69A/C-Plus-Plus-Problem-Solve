#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
};
struct point* fun(int a, int b)
{
    struct point *ptr = (struct point*)malloc(sizeof(struct point));
    ptr->x = a;
    ptr->y = b+100;
    return ptr;
}
void print(struct point *ptr)
{
    cout<<ptr->x<<" "<<ptr->y<<endl;
}
int main()
{
    struct point *ptr1,*ptr2;
    ptr1 = fun(12,24);
    ptr2 = fun(224,65);
    print(ptr1);
    print(ptr2);
    free(ptr1);
    free(ptr2);
    return 0;
}
