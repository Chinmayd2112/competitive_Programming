#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,m,k;
cin>>n>>m>>k;
int sum=0;
for(int i=1;i<=k;i++)
{
    sum=sum+(n*i);
}
if(sum<m)
cout<<"0"<<endl;
else
cout<<sum-m<<endl;

}