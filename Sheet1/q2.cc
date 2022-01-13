#include<iostream>
using namespace std;
int main()
{
int n,z;
cout<<"\n enter no. of rows:";
cin>>n;
z=n;
for(int i=0;i<=n;i++)
{
    for(int k=z;k>0;k--)
    {
        cout<<" ";
    }
    for(int j=0;j<i;j++)
    {
        cout<<"*";
    }
    z--;
    cout<<"\n";
}
return 0;
}
