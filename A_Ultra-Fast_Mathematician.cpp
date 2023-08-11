#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
   
    string st;
    cin>>st;
    string st1;
    cin>>st1;
   // stoi(st1);
   // stoi(st);
    for(int i=0;i<st.size();i++)
    {   
        cout<<(st[i]^st1[i]);
    }
}