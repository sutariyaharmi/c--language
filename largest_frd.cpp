#include<iostream>
using namespace std;
class largest{
    int x,y ;
    public:
    void setdata(){
        cout<<"enter two number:";
        cin>>x>>y;
    }
    friend void getarea(largest t);
};
void getarea(largest t){
    cout<<"largest no is:"<<((t.x>t.y)?t.x:t.y)<<endl;
}
  int main()
  {
    largest t;
     t.setdata();
     getarea(t);
     return 0;
  }
  