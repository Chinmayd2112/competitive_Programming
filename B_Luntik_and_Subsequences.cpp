#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{   int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count1=0,count0=0;
    for(int i=0;i<n;i++)
{
    if(a[i]==1)
    count1++;
    else if(a[i]==0)
    count0++;
}
long long ans=count1*pow(2,count0);
cout<<ans<<endl;
}
}