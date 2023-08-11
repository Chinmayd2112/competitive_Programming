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
    long long sum=1;
    for(int i=2;i<=n;i++)
    {   
        if(i%2==0)
        sum=sum+i/2;
        else
        sum=sum+i/2+1;
    }
    cout<<sum<<endl;
}
}