#include<iostream>
using namespace std;
int main()
{
    int Test_case,p_live,Room_capacity,can_live=0;
    cin>>Test_case;
    while(Test_case--)
    {
        cin>>p_live>>Room_capacity;
        if((Room_capacity-p_live)>=2)
            can_live++;
    }
    cout<<can_live<<endl;
    return 0;
}
