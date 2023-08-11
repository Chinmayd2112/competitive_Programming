#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
   long long int a,b,c,d;
    cin>>a>>b>>c>>d;
  // cout<<__gcd(a,d)<<" "<<__gcd(c,b)<<endl;
    if((a==0 && c==0))
        cout<<0<<endl;
    else if(a==0 || c==0)
    cout<<1<<endl;
    else if(a*d==b*c )
    cout<<0<<endl;
    else if((a*d)%(b*c)==0 || (b*c)%(a*d)==0)
    cout<<1<<endl;
    else
    cout<<2<<endl;
}
}