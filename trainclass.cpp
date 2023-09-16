#include<iostream>
using namespace std;
class train{
    int no;
    char name[20];
    char source[20];
    char destination[20];
    float journeydate;
    float capacity;


    public:
    void traindata(){
        cout<<"enter no :";
        cin>>no;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter source:";
        cin>>source;
        cout<<"enter destination:";
        cin>>destination;
        cout<<"enter journeydate:";
        cin>>journeydate;
        cout<<"enter capacity:";
        cin>>capacity;
    }


   void displaydata(){
       cout<<"enter no:"<<no<<endl;
       cout<<"enter name:"<<name<<endl;
       cout<<"enter source:"<<source<<endl;
       cout<<"destination:"<<destination<<endl;
       cout<<"journeydate:"<<journeydate<<endl;
       cout<<"capacity:"<<capacity<<endl;
   }
};
 int main(){
    train t;
    t.traindata();
    t.displaydata();
 }