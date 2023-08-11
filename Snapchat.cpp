#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int n,co=0,count=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            if(b[i]==0)
            {
            co++;
            count++;
            }
            else
            co++;
        }
       // co++;
        else if(b[i]==0)
        co++;
       
    }
    cout<<n-co-count<<endl;
    
}
}