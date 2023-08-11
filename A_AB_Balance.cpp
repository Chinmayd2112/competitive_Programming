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

    if(st[0]==st[st.size()-1])
    cout<<st<<endl;
    else 
    {
        for(int i=0;i<st.size()-1;i++)
        {
            cout<<st[i];
        }
        cout<<st[0]<<endl;
    }
}
}