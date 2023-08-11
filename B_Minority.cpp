#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    string st;
    cin>>st;
    unordered_map<int,int> mp;
    vector<int> v;
    for(int i=0;i<st.size();i++)
    {
        mp[st[i]]++;
    }
    for(auto x:mp)
    {
        v.push_back(x.second);
    }
   // cout<<v[0]<<" "<<v[1]<<endl;
  // cout<<st.size()<<endl;
    if(st.size()==1)
    cout<<0<<endl;
    else
    {
   
       if(v.size()==1)
        cout<<0<<endl;
       
        else if(v[0]==v[1])
        cout<<v[0]-1<<endl;
        else if(v[0]>v[1])
        cout<<v[1]<<endl;
        else
        cout<<v[0]<<endl;
        
    
    }
}
}
// 0
// 1
// 00
// 10
// 01
// 11
// 000
// 100
// 010
// 110
// 001
// 101
// 011
// 111
// 0000
// 1000
// 0100
// 1100
// 0010
// 1010
// 0110
// 1110
// 0001
// 1001
// 0101
// 1101
// 0011
// 1011
// 0111
// 1111
// 00000
// 10000
// 01000
// 11000
// 00100
// 10100
// 01100
// 11100
// 00010
// 10010
// 01010
// 11010
// 00110
// 10110
// 01110
// 11110
// 00001