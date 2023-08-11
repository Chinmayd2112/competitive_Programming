#include<bits/stdc++.h>
using namespace std;
int main() {
    string st;
    cin>>st;
    string st1=st;
    if(int(st[0])>=97 && int(st[0])<=122) 
    { 
        cout<<st[0]+32;
     cout<<(char(st[0]-32));
     for(int i=1;i<st.size();i++)
     {
     cout<<st[i];
     }
    }
    else
    cout<<st1;
    
    

     
     
}