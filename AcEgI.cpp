 #include<iostream>
 using namespace std;
 int main()
 {
    int a;
    for(a=65;a<=90;a+=4)
    {
        cout<<" "<<(char)(a);
        cout<<" "<<(char)(a+34);
    }
 }