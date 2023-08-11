#include<bits/stdc++.h>
using namespace std;
int main ()
{
long long int n,m,count=0,t,flag=0;
cin>>n>>m;
t=m/n;
if(m%n==0 and m/n==1)
cout<<"0"<<endl;

else if(m%n==0)
{   

    if((t)%2==0)
{
    while(t%2==0)
    {   
        t=t/2;
        count++;
        flag=1;
    }
   // cout<<t<<endl;
}
 if (t%3==0)
{
    while(t%3==0)
    {   
         t=t/3;
        count++;
        flag=1;
       
    }
}
if(flag==1)
cout<<count<<endl;
else
cout<<"-1"<<endl;
}

else
cout<<"-1"<<endl;
}