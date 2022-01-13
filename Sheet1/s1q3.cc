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
    for(int k=0;k<i;k++)
    {
        cout<<" ";
    }
    for(int j=z;j>0;j--)
    {
        cout<<"*";
    }
    z--;
    cout<<"\n";
}
return 0;
}
