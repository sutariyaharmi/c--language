#include<iostream>
using namespace std;
class student{
    int adminno;
    char sname[20];
    float eng , maths ,sci ,total;
    float ctotal(){
          return eng+maths+sci;
    }

    public:
    void takedata(){
        cout<<"enter admin no:";
        cin>>adminno;
        cout<<"enter student name:";
        cin>>sname;
        cout<<"enter english mark:";
        cin>>eng;
        cout<<"enter maths mark:";
        cin>>maths;
        cout<<"enter science mark:";
        cin>>sci;
        total=ctotal();
    }
    void showdata(){
        cout<<"admin no:"<<adminno<<endl;
        cout<<"student name:"<<sname<<endl;
        cout<<"engish marks:"<<eng<<endl;
        cout<<"maths marks:"<<maths<<endl;
        cout<<"science marks:"<<sci<<endl;
        cout<<"total marks:"<<total<<endl;
}
};
int main(){
    student s;
    s.takedata();
    s.showdata();
}