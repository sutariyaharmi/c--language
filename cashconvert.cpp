#include<iostream>
using namespace std;
int main()
{
    int cash;
    cout<<"enter rupees:";
    cin>>cash;

    cout<<"\n2000 x"<<cash/2000;
    cash=cash%2000;

    cout<<"\n500 x"<<cash/500;
    cash=cash%500;

    cout<<"\n200 x"<<cash/200;
    cash=cash%200;

    cout<<"\n100 x"<<cash/100;
    cash=cash%100;

    cout<<"\n50 x"<<cash/50;
    cash=cash%50;

    cout<<"\n20 x"<<cash/20;
    cash=cash%20;

    cout<<"\n10 x"<<cash/10;
    cash=cash%10;

    cout<<"\n5 x"<<cash/5;
    cash=cash%5;

    cout<<"\n2 x"<<cash/2;
    cash=cash%2;

    cout<<"\n1 x"<<cash/1;
    cash=cash%1;

}