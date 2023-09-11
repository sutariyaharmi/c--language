#include<iostream>
using namespace std;
class volume{
    public:
    int calc(double i ,double h ,double w){
        return i*h*w;
    }
    int calc(int l){
        return l*l;
    }
    int calc(double r , double h){
        return 3.14*r*r*h;
    }
};
int main(){
    volume m;
    cout<<"cuboid volume is:"<<m.calc(5,10,20)<<endl;
    cout<<"cube volume is:"<<m.calc(5)<<endl;
    cout<<"cylinder volume is:"<<m.calc(10,20)<<endl;
}