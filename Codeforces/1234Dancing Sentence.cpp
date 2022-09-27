#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,j;
    while(getline(cin,s)!=NULL)
    {
            j=0;
        for( i=0; i<s.size(); i++)
        {
            if(s[i] != ' ')
            {
                  j++;
            if(s[i] > 96 && j%2 == 1)
                s[i] -= 32;
            else if(s[i] < 96 && j%2 == 0)
                s[i] += 32;
            }

        }
        cout<<s<<endl;
    }

    return 0;
}
