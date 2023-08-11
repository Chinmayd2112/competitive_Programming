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
    stoi(st);
    int c=0;
    for(int i=0;i<st.size();i++)
    {
        if(st[i]%2==0)
        c++;
    }
    if(c==0)
    cout<<"-1"<<endl;
    else
    {
    for(int i=0;i<st.size();i++)
    {
        if(st[0]%2==0 && st[st.size()-1]%2==1)
        {
        cout<<1<<endl;
        break;
        }
        else if(st[st.size()-1]%2==0)
        {
        cout<<0<<endl;
        break;
        }
        else
        {
        cout<<2<<endl;
        break;
        }
    }
    }
}
}