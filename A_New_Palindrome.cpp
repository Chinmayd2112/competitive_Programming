#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{   string st;
cin>>st;
int count=0;
    unordered_map<char,int> mp;
    for(int i=0;i<st.size();i++)
    {
        mp[st[i]]++;
    }
    if(mp.size()==1)
    cout<<"NO"<<endl;
    else if(mp.size()==2)
    {
        for(auto x:mp)
        {
            if(x.second ==1)
            count++;
        }
        if(count==1 or count==2)
        cout<<"NO"<<endl;
    }
    // cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
    }
}
}