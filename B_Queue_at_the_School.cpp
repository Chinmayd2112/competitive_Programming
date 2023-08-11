#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string st;
    cin>>st;
    for(int i=0;i<t;i++)
    {
        for(int i=1;i<n;i++)
        {
            if(st[i-1]=='B' && st[i]=='G')
            {
                swap(st[i-1],st[i]);
                i++;
            }
        }
    }cout<<st<<endl;
    
}