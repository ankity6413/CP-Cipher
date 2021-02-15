#include <iostream>
using namespace std;
 
int Count(int a[], int n)
{
    int c = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                c++;
 
    return c;
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
    cout << " Number of inversions are "
         << Count(a, n);
    return 0;
}