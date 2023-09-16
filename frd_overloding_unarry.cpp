#include<iostream>
using namespace std;
class box{
    int l , b , h;
    public:
    void setdata(int x , int y , int z){
        l=x , b=y , h=z;
    }
    int getvolume(){
        return l*b*h;
    }
    friend box operator++(box m);
};
box operator++(box m){
    box t;
    t.l = ++m.l;
    t.b = ++m.b;
    t.h = ++m.h;
    return t;
}
int main(){
    box b1 , b4;
    b1.setdata(2,3,4);
    cout<<"volume of box b1 is:"<<b1.getvolume()<<endl; 

   // b2.setdata(4,5,6);
   // cout<<"volume of box b1 is:"<<b2.getvolume()<<endl;

    b4 = ++b1;
    cout<<"new volume of box b4 is:"<<b4.getvolume()<<endl; 
}