#include<iostream>
using namespace std;
void segregate(int a[],int n);
int main(){
	int n;
    cout<<"Enter No of elements";
    cin>>n;
    int a[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    segregate(a,n);
    return 0;
    }

    void segregate(int a[],int n){
        int zero=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
                zero++;
        }
        for(int i=0;i<zero;i++){
            cout<<"0 ";
        }
        for(int i=0;i<n-zero;i++){
            cout<<"1 ";
        }
        return;
    }