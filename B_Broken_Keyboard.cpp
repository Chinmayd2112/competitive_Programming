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
    string st;
    cin>>st;
    int flag=0,t=0;
    for(int i=0;i<n;i++)
    {
        if(i%3==1)
        {
            if(st[i]==st[i+1])
            {
            flag=1;
            t++;
        }
        }
    }
    if(flag==1 and t==n/3)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
}