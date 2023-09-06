/*
   constructor => class and function name same
               => automatically called when object is create
               => no return type and no return value
               => always in public section
               =>type -> default , parameterized , copy
*/
 
 #include<iostream>
 using namespace std;
 class test{
    public:
     test(){
        cout<<"default constructor is called......"<<endl;
     }
     test(int a){
        cout<<"parameterized constructor is called....\na:"<<a<<endl;
     } 
     test(char a){
        cout<<"parameterized constructor is called.....\na:"<<a<<endl;
     }
 };
 int main()
 {
    test a('z'), t(150),harmi;
 }