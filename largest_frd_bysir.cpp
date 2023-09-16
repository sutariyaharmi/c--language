#include<iostream>
using namespace std;
class large{
   int l , b;
   public:
   void setdata(int x , int y){
    l=x , b=y;
   }
};
   friend max(large t);
   if(t.l>t.b){
    cout<<"largest is:"<<t.x;
   }
   else{
     cout<<"large is:"<<t.y;
   }
   int main(){
     large t;
     t.setdata(10,20);
     t.max();
     return 0;
   }
    