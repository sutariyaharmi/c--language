#include<iostream>
using namespace std;
#define n 5
int dis (int a[])
{
    int min , max;
    min = max =a[0];
    for(int i=0 ; i<n ; i++)
    {
        if(min>a[i])
        min = a[i];
        if(max<a[i])
        max=a[i];
    }
    cout<<"min is:"<<min;
    cout<<"\n max is:"<<max;
}
  int main()
  {
     int arr[n] , i;
     for(i=0 ; i<n ; i++)
     {
        cout<<"enter val:";
        cin>>arr[i]; 
     }
       dis(arr);
  }