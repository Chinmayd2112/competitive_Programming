#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>t;
        string st;
        cin>>st; 
        int counta=0,countb=0;
        for(int i=0;i<st.size();i++)
        {
            
              if( st[i]=='a')
              {
              counta++;
              }
              else 
              {
              countb++;
              }
        }   
        if((counta !=0  and countb==0) || (countb!=0 and counta==0))
            cout<<"-1"<<" "<<"-1"<<endl;
          for(int i=0;i<st.size();i++)
          {
            if(st[i]=='a' && st[i+1]=='b' || st[i]=='b'&& st[i+1]=='a')
            {
            cout<<i+1<<" "<<i+2<<endl;
            break;
            }
          }
             
        }
    }
