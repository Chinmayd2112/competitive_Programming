#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
long long int sum=0;
while(t--)
{
string st;
cin>>st;

if(st[0]=='I')
sum+=20;
else if(st[0]=='C')
sum+=6;
else if(st[0]=='T')
sum+=4;
else  if(st[0]=='O')
sum+=8;
else if(st[0]=='D')
sum+=12;
}
cout<<sum;
}