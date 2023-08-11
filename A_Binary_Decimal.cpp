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
    cout<<*max_element(st.begin(),st.end())<<endl;
}
}