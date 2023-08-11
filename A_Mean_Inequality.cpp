#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
       long  int n;
        cin>>n;
      long  int a[2*n];
    long    int c[n];
     long   int b[n];
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+2*n);
        //   for(int i=0;i<n;i++)
        // {
        //   cout<<a[i]<<" "<<a[2*n-1-i]<<" ";
        // }
        // cout<<"\n";
        
          for(int i=0;i<n;i++)
        {
            c[i]=a[i];
        }
        //   for(int i=0;i<n;i++)
        // {
        //   cout<<c[i]<<" ";
        // }
        for(int i=0;i<n;i++)
        {
            b[i]=a[n+i];
        }
        //   for(int i=0;i<n;i++)
        // {
        //   cout<<b[i]<<" ";
        // }

        for(int i=0;i<n;i++)
        {
            cout<<c[i]<<" "<<b[i]<<" ";
        }cout<<"\n";

    }
}