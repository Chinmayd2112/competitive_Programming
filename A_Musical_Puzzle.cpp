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
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[st[i]]++;

    }
    if(mp.size()==2)
    cout<<2<<endl;
    else if(mp.size()==1)
    cout<<1<<endl;
    else if(mp.size()==7)
    cout<<6<<endl;
    else
    cout<<mp.size()+1<<endl;
}
}