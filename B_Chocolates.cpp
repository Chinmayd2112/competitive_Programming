#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long int t,sum=0;
cin>>t;
int a[t];
for(int i=0;i<t;i++)
{
    cin>>a[i];
}
//sort(a,a+t);
int n=a[t-1];
for(int i=t-1;i>=0;i--)
{    if(n>a[i])
{  
    sum+=a[i];
    n=a[i]-1;
}
else if(a[i]>=n)
{
    sum+=n;
    n--;
}
     if(n==0)
     break;
     }
     
cout<<sum;
  //  cout<<sum<<" ";
}
//cout<<sum<<endl;

