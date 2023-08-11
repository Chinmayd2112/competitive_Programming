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
    vector<int> v;
    for(int i=0;i<n-1;i++)
    {  // if((a[i]-a[i+1])>0)
        v.push_back(a[i]-a[i+1]);
    }
    v.push_back(a[n-1]-a[0]);
   // cout<<*max_element(a,a+n)<<endl;
   // cout<<a[0]<<endl;
    v.push_back(*max_element(a,a+n)-a[0]);
    v.push_back(a[n-1]-*min_element(a,a+n));
    
   cout<<*max_element(v.begin(),v.end())<<endl;
}
}