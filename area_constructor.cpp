#include<iostream>
using namespace std;
class area{
    public:
    area(){
        cout<<"default area is:"<<endl;
    }
    area(int l,int w){
        cout<<"rectangle area is: "<<l*w<<endl; 
    }
    area(int l){
        cout<<"square area is:"<<l*l<<endl;
    }
    area(double b,double h, double a){
        cout<<"triangle area is:"<<b*h*a<<endl;
    }
    area(int r, double a){
        cout<<"circle area is:"<<r*r*a<<endl;
    }
};
int main()
{
    area d();
    area r(10,20);
    area s(20);
    area t(10,20,0.5);
    area c(10,3.14);     
}
