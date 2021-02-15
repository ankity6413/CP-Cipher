#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No of elements= ";
    cin>>n;
    int a[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int pre=0,on=1,post=2;
    if(a[0]>=a[1])
    {
        cout<<a[0];
    }
    for(int i=0;i<n-1;i++){
        if(a[pre]<a[on] && a[post]<a[on]){
            cout<<a[on];
        }
        pre++;
        on++;
        post++;
    }
    if(a[n-1]>a[n-2]){
        cout<<a[n-1];
    }
}