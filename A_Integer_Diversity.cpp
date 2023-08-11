#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
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
            mp[abs(a[i])]++;
        }
        int sum=0,count=0;
        for(auto x:mp)
        {
            // if(x.first==0)
            // x.second=1;
             if(x.second>=1)
            {
                if(x.first==0)
                count=1;
               else
                sum=sum+x.second;
            }
           // sum=sum+x.second;
        }cout<<sum+count<<endl;

        // sort(a,a+n)
        // if(a[0]==a[n-1])
        // cout<<
    }
}