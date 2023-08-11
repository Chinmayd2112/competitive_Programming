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
    int a[n-1];
    int sum1=0,sum2=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    // for(int i=0;i<n-1;i++)
    // {
    //     cout<<a[i];
    // }
    for(int i=0;i<n-1;i++)
    {
        sum1=sum1+a[i];
    }
    cout<<sum1+*max_element(a,a+n-1)<<endl;
    
    // sum1=a[0];
    // sum2=2*a[0];
    // for(int i=1;i<n-2;i++)
    // {
    //     sum1=sum1+a[i];
    //     if(sum1>=sum2)
    //     {
    //         sum2=sum2+sum1-sum2;
    //     }
    //     else
    //     sum2=sum2+a[i];
    // }
   
}
}