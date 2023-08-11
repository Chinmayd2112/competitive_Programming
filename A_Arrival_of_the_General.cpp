#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int min=INT_MAX;
int max=INT_MIN;
int imin=0;
int imax=0;
for(int i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
        imax=i;
    }
     if(a[i]<=min)
    {
        min=a[i];
        imin=i;
    }
    else
    continue;
}
// cout<<max<<" "<<min<<endl;
// cout<<imax<<" "<<imin<<endl;
if( imin<imax)
cout<<imax-0+n-imin-2<<endl;
else
cout<<imax-0+n-imin-1<<endl;
}