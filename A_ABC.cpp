#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {   int n;
        cin>>n;
        string st;
        cin>>st;
        int x=0,y=0;
        for(int i=0;i<st.size();i++)
        {
            if(st[i]=='1')
            x++;
            else
            y++;

        }
        
        if(x==1 && y==0 || x==0 && y==1)
        {
            cout<<"yes"<<endl;
        }
        else if(n==2)
        {
            if(x==2 || y ==2)
            cout<<"no"<<endl;
            else
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
        
       
    }
}