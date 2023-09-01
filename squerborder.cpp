#include<iostream>
using namespace std;
int main()
{
    int i ,j,sp=6;
    for(i=1;i<=sp;i++)
     {
        for(j=1;j<=sp;j++)
        {
            if(j==1 || j==sp || i==1 || i==sp)
                cout<<"* ";
            else
                cout<<"  ";
        }
           cout<<"\n";
     }
}