#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int  n;
    cin>>n;
    vector<int> v;
    vector<int> v1;
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0)
        v.push_back(i);/* code */
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(100%v[i]==0)
        v1.push_back(v[i]);/* code */
    }
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    
    cout<<100/(*max_element(v1.begin(),v1.end()))<<endl;
}
}