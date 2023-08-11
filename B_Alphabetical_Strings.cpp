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
   // sort(st.begin(),st.end());
    
    if(st.size()==1)
    {
        if(st[0]=='a')
        cout<<"yes"<<endl;
        else 
        cout<<"no "<<endl;
    }
    
    int flag=0;
     if(st.size()>1)
    {
        
     
    for(int i=0;i<st.size();i++)
    {
        if((st[i]=='a' and st[i+1]== 'b')  or  (st[i]== 'b' and st[i+1]=='a'))
        flag=1;
    }
    
    if(flag==1)
    {
    sort(st.begin(),st.end());
    if(st[st.size()-1]=='a'+st.size()-1)
    cout<<"yes"<<endl;
    else 
    cout<<"no "<<endl;
    }
    else if(flag==0)
    {
    cout<<"no"<<endl;
    }
    }
}
}



