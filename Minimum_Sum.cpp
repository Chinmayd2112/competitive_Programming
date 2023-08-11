#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    // cout<<n*mini<<endl;
    sort(a,a+n);
   // vector<int>v;
    mini=a[0];
   // cout<<mini<<endl;
    for(int i=0;i<n;i++)
    {
      if( __gcd(mini,a[i])<mini)
        mini=__gcd(mini,a[i]);
     
    } 
    cout<<n*mini<<endl;
   
    
   
}
}