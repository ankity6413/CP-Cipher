#include<iostream>
#include <bits/stdc++.h>
using namespace std; 
   
void alternateSort(int arr[], int n) 
{ 
    sort(arr, arr+n);  
    int i = 0, j = n-1; 
    while (i < j) { 
        cout << arr[j--] << " "; 
        cout << arr[i++] << " "; 
    } 
    if (n % 2 != 0) 
        cout << arr[i]; 
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
    alternateSort(a, n); 
    return 0; 
} 