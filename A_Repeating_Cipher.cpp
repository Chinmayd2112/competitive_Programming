#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
string st;
cin>>st;
int sum=0;
for(int i=0;i<t;i++)
{   sum+=i;
//cout<<sum<<endl;
if(sum<t)
    cout<<st[sum];
}
}