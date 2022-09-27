#include<iostream>
using namespace std;
int max(int a,int b){return (a>b)?a:b;}
int knapsack(int w,int wt[],int val[],int n)
{
    //Base case
    if(n==0 || w==0)
        return 0;
    //If weight of the nth item is more
    //than knapsack capacity w,then
    //this item cannot be included
    //int the optimal solution
    if(wt[n-1]>w)
        return knapsack(w,wt,val,n-1);

    //Return the maximum of two cases:
    //(1) nth item included
    //(2) not included
    else
        return max(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));

}
int main()
{
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int w = 50;
    int n = sizeof(val)/sizeof(val[0]);
    cout<<knapsack(w,wt,val,n);
    return 0;
}
