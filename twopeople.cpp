#include<iostream>
using namespace std;
bool meet(int x1,int v1,int x2,int v2);
int main()
{
    int x1,v1,x2,v2;
    cout<<"x1= ";
    cin>>x1;
    cout<<"v1= ";
    cin>>v1;
    cout<<"x2= ";
    cin>>x2;
    cout<<"v2= ";
    cin>>v2;
    if(meet(x1,v1,x2,v2))
        cout<<"Yes";
    else
        cout<<"No";
}
bool meet(int x1,int v1,int x2,int v2)
{   while(true){
    if(x1==x2)
    {
        return true;
    }else if((x1<x2 && v1>v2)||(x2<x1 && v1<v2))
    {
       x1+=v1;
       x2+=v2;
    }else 
        return false;
}
}