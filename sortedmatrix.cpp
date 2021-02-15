#include <iostream>
using namespace std;
  
int main()
{
    int n;
    cout << "Matrix size="
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin >>a[i][j];
        }
    int x;
    cout<<"Enter x="
    cin >>x;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        if(a[i][j] == x)
        {
            cout<<"Element found at ("<<i << ", " << j << ")"<<endl;
            return 0;
        }
    }
  
    cout << "n Element not found";
    return 0;
}