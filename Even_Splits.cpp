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
    vector<char> v;
     vector<char> v1;
    for(int i=0;i<n;i++)
    {
        if(st[i]=='1')
        v.push_back(st[i]);
        else
        v1.push_back(st[i]);

    }
    if(n>2)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i];
    }
    for(int i=0;i<v.size();i++)
    {
    cout<<v[i];
    }cout<<endl;
}
else
cout<<st<<endl;
}
}