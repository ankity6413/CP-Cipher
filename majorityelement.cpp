#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No of elements= ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int max=0,element,temp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j])
                temp++;
        }
        if(temp>max){
            max=temp;
            element=a[i];
        }
        temp=0;
        }
    if(max>=n/2){
        cout<<element;
    }
}