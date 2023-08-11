#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
int n;
string st;
cin>>n;
n++;
for(int i=0;i<155;i++)
{  st=to_string(n);
  if((st[0]!=st[1] )&& (st[1]!=st[2]) && (st[2]!=st[3]) && (st[2]!=st[0]) && (st[0]!=st[3])   && (st[1]!=st[3]))
  {
    cout<<st<<endl;
    break;
  }
  else
  n++;

}
}