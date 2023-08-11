#include<bits/stdc++.h>
using namespace std;
int main ()
{
 vector<int> v;
 int n,k,l,c,d,p,nl,np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 v.push_back((k*l)/nl);
 v.push_back(c*d);
 v.push_back(p/np);
 cout<<*min_element(v.begin(),v.end())/n<<endl;
 
}