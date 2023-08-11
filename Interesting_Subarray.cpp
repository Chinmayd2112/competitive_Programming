
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main ()
{
int t ;
cin>>t;
while(t--)
{
    ll a;
    cin>>a;
    vector<int>v;
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
    }
   // sort(v.begin(),v.end());
    for(int i=0;i<a;i++)
    {
        cout<<v[i]<<endl;
    }
    if (v[a-1]<0 and v[0]<0)
    {
        cout<<"s" <<v[a-1]*1ll*v[a-1]<<" "<<v[0]*1ll*v[0]<<endl;
    }
    else if ((v[a-1]>=0 and v[0]>=0))
    {
        cout<<v[0]*1ll*v[0]<<" "<<v[a-1]*1ll*v[a-1]<<endl;
    }
    else
    {
        cout<<v[0]*1ll*v[a-1]<<" "<<max(v[0]*1ll*v[0],v[a-1]*1ll*v[a-1])<<endl;
    }

}
} 
    
   