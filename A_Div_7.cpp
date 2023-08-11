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
    int x;
    
    if(n%7==0)
    cout<<n<<endl;
    else 
    {
    x=n+(7-n%7);
    if(x/10==n/10)
    cout<<x<<endl;
    else
    cout<<n-n%7<<endl;
    }
}
}