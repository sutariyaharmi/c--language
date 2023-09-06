#include<iostream>
using namespace std;
class flight
{
    char flightname[20];
    int flightno;
    char destination[50];
    int distance;
    float fule;
    public:
    int calfuel()
    {
        if(distance<=1000)
        {
            return 500;
        }
        else if(distance<=2000)
        {
            return 1100;
        }
        else if(distance>2000)
        {
            return 2200;
        }
    }
    void feedinfo()
    {
        cout<<"enter flight name:";
        cin>>flightname;
        cout<<"enter flight no:";
        cin>>flightno;
        cout<<"enter flight destination:";
        cin>>destination;
        cout<<"enter flight distance:";
        cin>>distance;
        fule=calfuel();
    }
    void showinfo()
    {
        cout<<"flight name:"<<flightname<<endl;
        cout<<"flight no:"<<flightno<<endl;
        cout<<"flight destination:"<<destination<<endl;
        cout<<"flight distance:"<<distance<<endl;
        cout<<"fuel:"<<fule<<endl;
     }
};
   int main()
   {
     flight f;
     f.feedinfo();
     f.showinfo();
   }