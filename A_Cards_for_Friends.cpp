#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    long long int a,b,n;
    long long int ans=1;
    cin >> a >> b >> n;
    // if (n == 1)
    // {
    //     cout << "YES" << endl;
       
    // }
    while (a % 2 == 0)
    {
        ans *= 2;
        a = a / 2;
    }
    while (b % 2 == 0)
    {
        ans *= 2;
        b = b / 2;
    }
    if (n <= ans)
    {
        cout << "YES " << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
}
