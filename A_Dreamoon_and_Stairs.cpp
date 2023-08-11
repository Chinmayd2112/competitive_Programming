#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,m,t,x,i=2;
cin>>n>>m;
if(m>n)
cout<<-1<<endl;
 else
        {
            if (n % 2 == 0)
                x = n / 2;
            else
                x = (n / 2) + 1;
            while (x%m != 0)
            {
                x++;
            }
             cout << x;
        }
        
       
    }
