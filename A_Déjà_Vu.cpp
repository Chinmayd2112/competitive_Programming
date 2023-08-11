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
    if(st.size()==1)
    {
        if(st[0]=='a')
        {
        cout<<"NO"<<endl;
        }
        else
       { cout<<"YES"<<endl;
        cout<<'a'<<st<<endl;}
    }
     else if(st.size()==2)
    {
        if(st[0]=='a')
        {
        cout<<"YES"<<endl;
        cout<<'a'<<st<<endl;
       // break;
        }
        else if(st[1]=='a')
        {
        cout<<"YES"<<endl;
        cout<<st<<'a'<<endl;
       // break;
        }
        else if(st[1]!='a'&& st[0]!='a')
        {
        cout<<"YES"<<endl;
        cout<<st<<'a'<<endl;
       // break;
        }
        else
        cout<<"NO"<<endl;
    }
   else 
  {   
    if(st[0]==st[st.size()-1])
    {
         
      cout<<"YES"<<endl;
      cout<<'a'<<st<<endl;

    }
    else if(st[0]=='a')
    { 
      cout<<"YES"<<endl;
      cout<<'a'<<st<<endl;
    }
    else if(st[st.size()-1]=='a')
    {
    cout<<"YES"<<endl;
    cout<<st<<'a'<<endl;
   }
   else
   cout<<"NO"<<endl;}
    
}
}