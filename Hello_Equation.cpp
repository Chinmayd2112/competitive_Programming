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
    int count=0,count1=1;
    // int a[n/2];
    // for(int i=1;i<=n/2;i++)
    // {
    //     a[i-1]=i;
    // }
    if(n<5)
    cout<<"no"<<endl;
    else
    {
   for(int i=1;i<sqrt(n);i++)
   {
    if((n-2*i)%(2+i)==0)
    {
        count=1;
    cout<<"yes"<<endl;
    break;
    }
    // else
    // {
    // count1=0;
    // }
    }
    // if(count==1)
     if(count==0)
    cout<<"no"<<endl;

    }
}
}
