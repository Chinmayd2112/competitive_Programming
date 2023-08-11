#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
int diff=0;
int n=t;


int sum=0;
for(int i=0;i<n;i++)
{
  int a,b;
  cin>>a>>b;
  diff=diff-a;
  diff=diff+b;
  if(diff>sum)
  sum=diff;
  else
  continue;

}
cout<<sum<<endl;


}