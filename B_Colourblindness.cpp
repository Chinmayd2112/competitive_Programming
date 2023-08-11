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
    string st,st1;
    cin>>st>>st1;
    int count=0;
    for(int i=0;i<st.size();i++)
    {
        if(st[i]==st1[i] || (st[i]=='B' and st1[i]=='G') || (st[i]=='G' and st1[i]=='B'))
        count++;
    }
    if(count==n)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}
}