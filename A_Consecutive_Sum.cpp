#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=INT_MIN,index=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        index=i;
        }
    }
    cout<<max<<" "<<index+1<<endl;
}
}
