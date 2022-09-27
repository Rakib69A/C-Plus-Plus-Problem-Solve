#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
};
struct point* fun(int a,int b)
{
    struct point *ptr = (struct point*)malloc(sizeof(struct point));
    ptr->x = a;
    ptr->y = b+5;
    return ptr;
}
void print(struct point *ptr)
{
    cout<<ptr->x<<" "<<ptr->y<<endl;
}
int main()
{
    struct point *ptr1,*ptr2;
    ptr1 = fun(2,3);
    ptr2 = fun(8,9);
    print(ptr1);
    print(ptr2);
    free(ptr1);
    free(ptr2);
    return 0;
}
