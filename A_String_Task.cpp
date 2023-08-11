#include<bits/stdc++.h>
using namespace std;
int main ()
{
string st;
cin>>st;
transform(st.begin(),st.end(),st.begin(), ::tolower);
vector<char>v;
for(int i=0;i<st.size();i++)
{
    if(st[i]=='a' or st[i]=='i' or st[i]=='o' or st[i]=='e' or st[i]=='u' or st[i]=='y')
    continue;
    else
    {
        v.push_back('.');
        v.push_back(st[i]);
    }
}
for(int i=0;i<v.size();i++)
{
    cout<<v[i];
}cout<<endl;
}