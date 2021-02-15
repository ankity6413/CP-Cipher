#include<iostream>
using namespace std;
int main(){
	int n;
    cout<<"Enter No of elements";
    cin>>n;
    int a[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m;
    cout<<"Enter No of elements";
    cin>>m;
    int b[m];
    cout<<"Enter elements";
    for(int i=0;i<m;i++)
        cin>>b[i];
    int c[n+m];
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]>=b[j])
            {
                c[k]=a[i];
                k++;
                i++;
            }

        else if(b[j]>=a[i])
                {
                    c[k]=b[j];
                    k++;
                    j++;
                }
    }
    while(i<n)
        c[k++]=a[i++];
    while(j<m)
        c[k++]=b[j++];

    for(int i=0;i<m+n;i++)
        cout<<c[i];

}