#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
   long int n;
    cin>>n;
    int a[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {   
        a[0]=a[0]&a[i];
        
    }
    //  for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    cout<<a[0]<<endl;
}
}