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
    vector<int> v;
    int ans=0,count=0;
    for(int i=0;i<n;i++)
    {   
        if(st[i]=='L')
        count++;
        else if(st[i]=='R')
        {
        v.push_back(i);
       // break;
        }
       

    }
    if(count==n or count==0) 
    cout<<"-1"<<endl;
    else if(st[0]=='R' and count>0)
    cout<<0<<endl;
    else
    cout<<*min_element(v.begin(),v.end())<<endl;
    //cout<<ans<<endl;

}
}