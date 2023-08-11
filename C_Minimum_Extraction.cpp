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
  long long   int a[n];
   // vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     sort(a,a+n);
    //   for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
      long long int ans = a[0];
        long long int d = -a[0];
        for (int i = 1; i < n; i++)
        {
            a[i] += d;
            ans = max(ans,a[i]);
            d -= a[i];
        }
        cout << ans << endl;
    }
    // cout<<*max_element(v.begin(),v.end());
}
