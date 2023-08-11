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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   // cout<<1<<endl;
    sort(a,a+n);
     for(int i=0;i<n;i++)
    {
        v[i]=a[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++)
    {   
        for(int j=i+1;j<n;j++)
        {   
            v.push_back(a[j]-a[i]);
        }
    }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    cout<<v.size()<<endl;

}
}