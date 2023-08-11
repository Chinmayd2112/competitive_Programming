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
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    int ab[k];
    for(int i=0;i<k;i++)
    {
        cin>>ab[i];
    }
    for(int i=0;i<n;i++)
    {
    //  for(int j=0;j<n;j++)
    
    if(a[i]!=ab[i])
    v.push_back(a[i]);
    
    }
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}
}
