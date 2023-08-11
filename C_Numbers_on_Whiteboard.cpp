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
   // int a[n];
    // for(int i=0;i<=n;i++)
    // {
    //     a[i]=i+1;
    // }
    cout<<2<<endl;
    int a=n,b=n-1;
    for(int i=1;i<n;i++)
    {   cout<<a<<" "<<b<<endl;
        a=(a+b+1)/2;b--;

    }

}
}