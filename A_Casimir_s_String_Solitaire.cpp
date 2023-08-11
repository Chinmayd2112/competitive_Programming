#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        int count_A=0,b=0,c=0;
        for(int i=0;i<st.size();i++)
        {
            if(st[i]=='A')
            count_A++;
            else if(st[i]=='B')
            b++;
            else 
            c++;

        }
        if(st.size()==1)
        cout<<"no"<<endl;
       else if(count_A+c==b)
        cout<<"yes"<<endl;
        else if(count_A==b && b==c)
        cout<<"no"<<endl;
        else if(count_A==b && c==0)
        {
            cout<<"yes"<<endl;

        }
         else if(c==b && count_A==0)
        {
            cout<<"yes"<<endl;

        }
        else
        cout<<"no"<<endl;
    }
}