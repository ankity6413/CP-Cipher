#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n= ";
    cin >>n;
    int a[n];
    for (int i =0;i<n;i++)
        cin >>a[i];
    
    cout << "Enter x";
    int x;
    cin>>x;
    int c=0,d=0;
    for(int i =0;i<n;i++){
        if(a[i]==x && c==0){
            cout<<"First at"<<i+1;
            c=1;
        }
        if(a[n-1-i]==x && d==0){
            cout<<"Last at"<<n-i;
            d=1;
        }
    }
}