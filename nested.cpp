#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nenter a , b and c:";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<"largest among:"<<a;
        
        else 
        cout<<"largest among:"<<c;    
    }
    else{
        if(b>c)
        cout<<"largest among:"<<b;

        else
        cout<<"largest among:"<<c;
    }
}