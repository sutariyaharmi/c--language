#include<iostream>
using namespace std;
class test{
    public:
    test(){
        cout<<"default constructor is called....."<<endl;
    }
     ~test(){
        cout<<"destructor is called....."<<endl;
     }   
     test(int a){
        cout<<"parameterized constructor is called....\na:"<<a<<endl;
     }
     test(char a){
        cout<<"parameterized constructor is called....\na:"<<a<<endl;
     }
};
int main()
{
    test a('Z'),t(150),asd;
}