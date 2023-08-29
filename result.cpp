#include<iostream>
using namespace std;
struct student{
    int roll;
    char name[20];
    int m,s,e,t;
    float per;
};
  int main(){
    struct student a[5];
    int i;
    for(i=0;i<2;i++){
     cout<<"________________________________\n";
     cout<<"roll no:";
     cin>>a[i].roll;

     cout<<"name:";
     cin>>a[i].name;

     cout<<"maths:";
     cin>>a[i].m;

     cout<<"science:";
     cin>>a[i].s;

     cout<<"english:";
     cin>>a[i].e;

     cout<<"\n";}

     cout<<"\n roll \t name \t maths \t sci \t eng \t total \t per \t grade \n";

     cout<<"\n________________________________";

     for(i=0;i<2;i++){
        a[i].t=a[i].m + a[i].s + a[i].e;
        a[i].per=(float)a[i].t/3;

        cout<<"\n"<<a[i].roll<<"\t"<<a[i].name<<"\t"<<a[i].m<<"\t"<<a[i].s<<"\t"<<a[i].e<<"\t"<<a[i].t<<"\t"<<a[i].per<<"";

        if(a[i].m<40 || a[i].s<40 || a[i].e<40)

        cout<<"fail..........";
         else if(a[i].per>=80)

       cout<<"A";  
        else if(a[i].per>=60)
         
        cout<<"B"; 

        else if(a[i].per>=40)
        cout<<"c";
        cout<<"\n";
     }


    }
  
