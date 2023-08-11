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
    vector<int> v;

   long long  int diff1=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>i+1)
        {
            v.push_back(a[i]-i-1);
        }
      
    }
   // cout<<*max_element(v.begin(),v.end());
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }cout<<endl;
    sum=v[0];
      for(int i=1;i<=v.size();i++)
        {
          //  
            if(v[i]>v[0])
            {
                v.push_back(v[i]-v[0]);
            sum+=diff1;
        }
        }
   // cout<<sum<<endl;
}
}