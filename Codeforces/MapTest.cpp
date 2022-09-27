#include<iostream>
using namespace std;
#include<map>
#include<iterator>
int main()
{
    map < string , int > m;
    m.insert(pair<string,int>("a",120));
    m.insert(pair<string,int>("X",120));
    m.insert(pair<string,int>("ab",120));

  map < string , int >m2(m);
  // map < string , int >m2(m.find("ab"),m.end());
    m2.erase(m2.begin(),m2.find("ab"));
    map < string , int > :: iterator it;

    for( it=m2.begin();it!=m2.end();it++)
    {
        cout<<it->first<<" = "<<it->second<<endl;
    }


}
