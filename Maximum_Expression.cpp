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
    sort(st.rbegin(),st.rend());
   // cout<<st<<endl;
    vector<char> v;
   // vector<char> v1;
    vector<char> v2;
    for(int i=0;i<st.size();i++)
    {
       if(st[i]=='+')
       v.push_back(st[i]);
       else if(st[i]=='-')
       v.push_back(st[i]);
       else 
       v2.push_back(st[i]);
    }
    sort(v.begin(),v.end());
    //(int i=0;i<v.size();i++)
    for(int i=0;i<v2.size()-v.size();i++)
    {
        cout<<v2[i];
    }
    int j=v2.size()-v.size();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<v2[j+i];
    }cout<<endl;
}
}