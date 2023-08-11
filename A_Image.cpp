#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    string st;
    string st1;
    cin>>st;
    cin>>st1;
    int count=0;
     if(st[0]==st[1])
        {
        count++;
        //cout<<"21"<<endl;
        }
         if(st1[0]==st1[1])
        {
        count++;
       // cout<<"12"<<endl;
        }
    for(int i=0;i<st.size();i++)
    {
        if(st[0]==st1[i])
        count++;
        else if(st[1]==st1[i])
        count++;
       
        
    }
    if(count>3)
    cout<<0<<endl;
    else if(count==2|| count==3)
    cout<<1<<endl;
    else if(count==1)
    cout<<2<<endl;
    else
    cout<<3<<endl;
}
}