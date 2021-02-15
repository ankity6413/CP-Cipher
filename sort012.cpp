#include<iostream>
using namespace std;
void sort(int *a,int n);
int main(){
	int n;
    cout<<"Enter No of elements";
    cin>>n;
    int a[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i];
    return 0;
    }

void sort(int *a,int n){
    int zero=0,one=0;
    for (int i=0;i<n;i++){
        if(a[i]==0)
            zero++;
        if(a[i]==1)
            one++;
    }
    for(int i=0;i<zero;i++){
        a[i]=0;
    }
    for(int i=zero;i<one;i++)
        a[i]=1;
    for(int i=one;i<n;i++)
        a[i]=2;
}
