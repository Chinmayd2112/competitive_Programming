#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    sum=a*1+b*2+c*3;
    if(sum%2==0)
    cout<<0<<endl;
    else
    cout<<1<<endl;
}
}