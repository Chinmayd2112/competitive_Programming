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
    char a[st.size()/2];
     char b[st.size()/2];
     vector<char> v;
     vector<char> v1;
    if(st.size()%2==0)
    { 
        for (int  i = 0; i < st.size()/2; i++)
        {
             v1.push_back(st[i]);
        }
        for (int  i = st.size()/2; i < st.size(); i++)
        {
            v.push_back(st[i]);
        }
        int count=0;
        for (int  i = 0; i < st.size()/2; i++)
        {
            if(v[i]!=v1[i])
            count++;
        }
        // for (int  i = 0; i < st.size()/2; i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        if(count==0)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
        
        
    

}
else
cout<<"no"<<endl;
}

}
