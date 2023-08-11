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
    int count=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n%2==1)
    cout<<"NO"<<endl;
    else
    {  
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(auto x:mp)
        {
            if(x.second%2==0)
            count++;
        }
        if(count==mp.size())
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        // if(mp.size()==2)
        // cout<<"YES"<<endl;
        // else
        // cout<<"NO"<<endl;
        
    }
}
}