#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
   long long int n,m;
    cin>>n>>m;
   long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   long long int sum=0;
    for(int i=0;i<n;i++)
    {
        if(m%2==0)
        {
            if(a[i]>m/2)
            sum=sum+(a[i]-1);
            else
            sum=sum+(m-a[i]);
        }
        else
        {
            if(a[i]>m/2)
            sum=sum+(a[i]-1);
            else
            sum=sum+(m-a[i]);
        }
    }
    cout<<sum<<endl;
}
}