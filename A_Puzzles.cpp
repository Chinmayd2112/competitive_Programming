#include<bits/stdc++.h>
using namespace std;
int main ()
{


    int n,m;
    cin>>n>>m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int diff=0;
    vector<int> v;
    // unordered_map<int,int> mp;
    // for(int i=0;i<m;i++)
    // {
    //     mp[a[i]]++;
    // }
    // for(mp)
    for (int i = 0; i < m-n+1; i++)

  
    {
       diff= (a[i+n-1]-a[i]);
        // cout<<a[i+n-1]<<endl;
         v.push_back(diff);
    }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    cout<<*min_element(v.begin(),v.end())<<endl;
   // cout<<diff<<endl;
} 

