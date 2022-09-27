#include<iostream>
using namespace std;
class Room{
private:
    double length;
    double breadth;
    double height;
public:
    void get_data(double len,double brth,double hgt){
        length=len;
        breadth=brth;
        height=hgt;
    }
    double calculateArea(){
           return length*breadth;
    }
    double calculateVolume(){
           return length*breadth*height;
    }
};
int main()
{
    Room room1;
    double a,b,c;
    cin>>a>>b>>c;
    room1.get_data(a,b,c);
    cout<<"Area of Room   :"<<room1.calculateArea()<<endl;
    cout<<"Volume of Room :"<<room1.calculateVolume()<<endl;
    return 0;
}
