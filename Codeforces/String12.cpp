#include<iostream>
#include<string>
using namespace std;
int main()
{
    int number = 248;

    double *distance = new double(390.812);

    string countries[] = { "Ghana", "Angola", "Togo","Tunisia", "Cote d'Ivoire" };


    cout<<"Number :"<<number<<endl;

    cout<<"Distance :"<<*distance<<endl;

    cout<<"Countries:\n";

    for(int i=0;i<sizeof(countries)/sizeof(string);i++)
    {
        cout<<'\t'<<countries[i]<<endl;
    }

    cout<<endl;

    return 0;
}
