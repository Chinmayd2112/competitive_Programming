#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int n;
    cin>>n;
    //int a[n];
    string st;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    cin>>st;
    char st1;
   // cout<<int(st[0])<<endl;
   // st1=a+ int(st[2]);
   // cout<<char('a'+1)<<endl;
    for(int i=0;i<n-2;i++)
    {
        if(st[i+2]!='0')
        
     //   string st1='a'
         cout<<char(('a'+int(st[i])-49));
        else
        {
        string st1;
        st1=st[i]+st[i+1];
       // cout<<
        cout<<char('a'+int(st1)-49);
        }
    }
}
}