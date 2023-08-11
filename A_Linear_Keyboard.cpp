#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    t;
    while(t--)
    {
        string st;
        cin>>st;
        string st1;
        cin>>st1;
        vector <int> v;
        char c;
        for(int i=0;i<st1.size();i++)
        {  c=st1[i];
            // cout<<st.find(c)<<" ";
             v.push_back(st.find(st1[i]));
        }
        int sum=0;
         for(int i=0;i<st1.size()-1;i++)
        {  
          sum=sum+abs(v[i]-v[i+1]);
         // cout<<v[i]<<" ";
        }cout<<sum<<endl;

    }
}