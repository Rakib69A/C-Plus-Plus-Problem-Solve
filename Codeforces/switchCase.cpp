#include<iostream>
using namespace std;
int main()
{
    char button;
    cin>>button;
//    if(button == 'a')
//        cout<<"As-sala-mu-alaikum"<<endl;
//    else if(button == 'b')
//        cout<<"Hellow"<<endl;
//    else if(button == 'c')
//        cout<<"Hola"<<endl;
//    else if(button == 'd')
//        cout<<"Ciao"<<endl;
//    return 0;
    switch(button)
    {
    case 'a':
        cout<<"As-sala-mu-alaikum"<<endl;
        break;
    case 'b':
        cout<<"Hello"<<endl;
        break;
    case 'c':
        cout<<"Ciao"<<endl;
        break;
    default:
        cout<<"I am still learning more"<<endl;
        break;
    }
    return 0;
}
