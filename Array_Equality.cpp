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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    int m=0;
    for(auto x:mp)
    {  
        if(x.second>=m)
        m=x.second; 
    }
    if(n%2==0)
    {
        if(m>n/2)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;

    }
    else
    {
        if(m>(n/2+1))
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }
}
}