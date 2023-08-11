#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t,r,m,b,a,flag=0;
cin>>t ;
for(int i=1;i<t;i++)
{
    if((t-4*i)%7==0)
    {
        r=i;
        m=(t-4*i)/7;
        break;
    }
    else if((t-7*i)%4==0)
    {
        b=i;
        a=(t-4*i)/7;
        break;
    }
    else 
    {
    cout<<-1;
    break;
    }
   // cout<<r<<" "<<m;
    // else 
    // flag=1;
}
for(int i=0;i<r;i++)
{
    cout<<4;
}
for(int i=0;i<m;i++)
{
    cout<<7;
// }
// for(int i=1;i<t;i++)
// {
//     }
//     else 
//     flag=1;
}
for(int i=0;i<b;i++)
{cout<<7;}
for (int i=0;i<a;i++)
{
    cout<<4;
}
// if (flag==1)
// cout<<-1;
}