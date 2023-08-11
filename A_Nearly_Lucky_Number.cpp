#include<bits/stdc++.h>
using namespace std;
int main() {
    string st;
    cin>>st;
    int count=0;
    if(st.size()==1)
    cout<<"NO"<<endl;
    else
    {
    for(int i=0;i<st.size();i++)
   {
    if(st[i]=='4'|| st[i]=='7')
    count++;
   }
  // cout<<count;
   if(count==st.size())
   {
    cout<<"YES"<<endl;
    
   }
   else
   cout<<"NO"<<endl;
    }
}