#include<bits/stdc++.h>
using namespace std;
int main ()
{
string st;
int t=0;
cin>>st;
//st[0]=toupper(st[0]);
for(int i=0;i<st.size();i++)
{
   if(islower(st[i]))
   t++;
}
if(t==1 and isupper(st[0]))
cout<<st;
else if(t>1)
cout<<st;
else
{
for(int i=0;i<st.size();i++)
{
   if(islower(st[i]))
   st[i]=toupper(st[i]);
   else
   st[i]=tolower(st[i]);

}
cout<<st;
}
}