#include<iostream>
using namespace std;
class area{
       public:
       int calc(int l , int w){
         return l*w;
       }
       int calc (int l){
          return l*l;
       }
       double calc (double b ,double h , double a){
          return b*h*a;
       }
       double calc(int r ,double a){
         return r*r*a;
       }
};
int main(){
    area a;
    cout<<"rectangle area is:"<<a.calc(10,20)<<endl;
    cout<<"square area is:"<<a.calc(20)<<endl;
    cout<<"triangle area is:"<<a.calc(10,20,0.5)<<endl;
    cout<<"circle area is:"<<a.calc(10,3.14)<<endl;
}
