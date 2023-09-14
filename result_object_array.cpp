#include<iostream>
using namespace std;
class result{
     int no;
     char name[20];
     int eng , maths , total;
     float avg;

    public:
    void takedata(){
        cout<<"enter no:";
        cin>>no;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter english marks:";
        cin>>eng;
        cout<<"enter maths marks:";
        cin>>maths;
    }  
     void getdata(){
        cout<<"total marks is:"<<eng+maths<<endl;
        cout<<"avg marks is:"<<(eng+maths)/2<<endl;
     }   
};
int main(){
    result t[5];
    int i;
    for(i=0; i<2; i++){
        cout<<"enter data of"<<i+1<<endl;
        t[i].takedata();
    }
    cout<<endl<<endl;
    for(i=0; i<2; i++){
        cout<<"display data of "<<i+1<<endl;
        t[i].getdata();
    }
}
