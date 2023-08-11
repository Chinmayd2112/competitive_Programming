#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
int a[t];
for(int i=0;i<t;i++)
{
    cin>>a[i];
}
int count=0;
for(int i=0;i<t;i++)
{
    if(a[i] == 1)
    count++;
}
if(count>0)
cout<<"HARD"<<endl;
else
cout<<"EASY"<<endl;
}