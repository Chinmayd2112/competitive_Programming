#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
long long sum=t;
for(int i=1;i<t;i++)
{
    sum+=i*(t-i);
}

cout<<sum<<endl;
}