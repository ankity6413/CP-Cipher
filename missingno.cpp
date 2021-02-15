#include<iostream>
using namespace std;

int getMissingNo(int a[], int n)
{
 
    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}
int main()
{
    int n;
    cout<<"Enter No of elements";
    cin>>n;
    int a[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int miss = getMissingNo(arr, n);
    cout << miss;
}