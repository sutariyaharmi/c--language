#include<iostream>
using namespace std;
class test{
    public:
    test(){
          cout<<"default constructor is called......"<<endl;
    }
    test(int a){
        cout<<"squear is :"<<a*a<<endl;
     } 
     test(char a){
        cout<<"char is:"<<a<<endl;
     }
     test(int a, int b){
        cout<<"product is :"<<a*b<<endl;
     } 
     test(double a, double b){
        cout<<"addition is :"<<a+b<<endl;
     } 
     test(int a, int b, int c){
        cout<<"addition is :"<<a+b+c<<endl;
     } 
};
int main(){
      test a(2,5), b(2.5,2.7), c(1,2,3);
}