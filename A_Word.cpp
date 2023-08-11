#include<bits/stdc++.h>
using namespace std;
int main() {
    string st,str,str1;
    cin>>st;
    int count=0;
    int count1=0;
    for(int i=0;i<st.size();i++)
    {
        if(int(st[i])>=97 && int(st[i]<=122) )
        count++;
        else if(int(st[i])>=65 && int(st[i])<=90)
        count1++;
    }
  // cout<<count<<" "<<count1<<endl;

   if(count>=count1)
    {
       transform(st.begin(),st.end(),st.begin(), ::tolower);
        cout<<st<<endl;
    }
   // }
    else
    {
    transform(st.begin(), st.end(), st.begin(), ::toupper);
    cout<<st<<endl;
    }
}