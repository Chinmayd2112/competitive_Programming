#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,x,y;
cin>>n>>x>>y;
int a[n];
int t=0,r=0;
vector<int> v;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int flag=0;
if(n==x and x==y )
{  
    for(int i=0;i<n;i++)
    
    {int min=INT_MAX;
    
    if(min>a[i])
    {
    min=a[i];
    x=i;
    }
    }
    cout<<x+1<<endl;
}
else
{
    for(int i=0;i<n;i++)
{   int t=0,r=0;
    for(int j=i-1;j<i+x-1;j--)
    {   if((j)>=0)
        {
        if(a[i]<a[j])
        t++;
        }
    
    }
    //cout<<t<<endl;
    for(int k=i+1;k<i+y+1;k++)
    {   if(k<n)
       {
        if(a[k]>a[i])
        r++;
       }
    }//cout<<r<<endl;
 //  cout<<t<<" "<<r<<endl;
    if(t==x and r==y)
    v.push_back(i);
}
cout<<*min_element(v.begin(),v.end())+1;}
}  