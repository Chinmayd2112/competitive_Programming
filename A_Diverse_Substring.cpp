#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
string st;
cin>>st;
unordered_map<char,int> m;
for(int i=0;i<st.size();i++)
{
    m[st[i]]++;
}
int max=INT_MIN;
for(auto x:m)
{   if(x.second>max)
    max=x.second;
}
if(max==t)
cout<<"NO"<<endl;
else
{  cout<<"YES"<<endl;
    for(int i=0;i<st.size();i++)
   { 

    if(st[i]!=st[i+1])
    {
    cout<<st[i]<<st[i+1]<<endl;
    break;
    }
   }
    

}
}