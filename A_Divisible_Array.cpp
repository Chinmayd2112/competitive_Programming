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
    if(n%2==1)
    {for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
        // break;
    }
    }
    // cout<<endl;}

    if(n%2==0 )
    {
        for(int i=1;i<=n;i++)
        {cout<<i*2<<" ";
        }
        // break;
    }cout<<endl;
    
}
}