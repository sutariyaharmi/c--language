#include<iostream>
using namespace std;
class test{
    public:
    int calc(int a){
        return a*a;
    }
    double calc(double a){
        return a+a;
    }
    double calc(int a , int b){
         return a*b;
    }
    double calc(double a, double b){
        return a-b;
    }
};
int main(){
    test t;
    cout<<"square is:"<<t.calc(10)<<endl;
    cout<<"addition is:"<<t.calc(10.2)<<endl;
    cout<<"product is:"<<t.calc(5,9)<<endl;
    cout<<"substriction is:"<<t.calc(10.2,6.3)<<endl;
}
