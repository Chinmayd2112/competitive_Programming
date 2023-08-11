#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    long long int n,r,l,k;
    cin>>n>>r>>l>>k;
   long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long int sum=0,count=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>=r and a[i]<=l)
        {
           sum=sum+a[i];
           if(sum<=k)
           count++;
        //   else if(sum==k)
        //    count++;
        }
        else
        continue;
    }
    cout<<count<<endl;
    
    
}
}