#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    string st,st1;
    cin>>st>>st1;
    unordered_map<char,int> mp;
    unordered_map<char,int> mp1;
    for(int i=0;<st.size();i++)
    {
        mp[st[i]]++;
    }
    for(int i=0;i<st1.size();i++)
    {
        mp1[st1[i]]++;
    }
    for(auto x: mp)
    {
        v.push_back(x.first);
        v.push_back(x.second);
    }
}
}