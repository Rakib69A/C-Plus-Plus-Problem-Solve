#include<iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==5)
        {
            cout<<2<<" "<<4<<endl;
            continue;
        }
        int i,j,flag=0,arr1[n],arr2[n],x=0,y=0,count=0;
        for(i=2; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(n%i==n%j)
                {
                    arr1[x++]=i,arr2[y++]=j;
                    count++;
                }
            }
        }
//        for(i=0; i<count; i++)
//        {
//            cout<<arr1[i]<<" "<<arr2[i]<<endl;
//        }
        int IsPrime(int arr1[],int count);
        int IsPrime(int arr2[],int count);

    }
    return 0;
}
int IsPrime(int arr[],int size)
{
    int i,j;
     for(i=0; i<size; i++)
        {
            int isprime=0;
            for(j=2; j<arr[i]; j++)
            {
                if(arr[i]%j==0)
                {
                    isprime=1;
                    break;
                }
            }
            if(isprime==0)
            {
                cout<<arr[i]<<" ";
                break;
            }
        }
        cout<<arr[i]<<" ";
}
