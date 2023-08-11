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
            a[i]=i+1;
        }
        cout<<n<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }cout<<"\n";
        
        for(int i=0;i<n-1;i++)
        {
            swap(a[i],a[i+1]);
            for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }cout<<"\n";
           // cout<<a[i]<<" ";
           // break;
        }//cout<<"\n";
        // for(int i=0;i<n;i++)
        // {
        //     cout<<a[i]<<" ";
        // }cout<<"\n";
    }
}