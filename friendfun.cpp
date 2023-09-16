//friend function
#include<iostream>
using namespace std;
class rect{
    friend rect sum(rect , rect);
    int l , b;

    public:
       void setdata(int x , int y);
       int getarea()
        {
            return l*b;
        }
};

void rect :: setdata(int x , int y)
{
    l = x , b = y;
}
rect sum(rect m , rect n)
{
    rect t;
    t.l = m.l + n.l;
    t.b = m.b + n.b;
    return t;
}
int main()
{
    rect r , s , z;
    r.setdata(5,6);
    cout<<"area of rectangle is:"<<r.getarea()<<endl;
    s.setdata(4,7);
    cout<<"area of rectangle is:"<<s.getarea()<<endl;
    z = sum(r ,s); // 9 13
    cout<<"area of rectangle is:"<<z.getarea()<<endl;

}