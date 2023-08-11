// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
// int t ;
// cin>>t ;
// while(t--)
// {
//     int n,x;
//     cin>>n>>x;
//     int  a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int count=0;
//     int sum=0;
//     int sum1=0;
    
//         float xx=x;
//     for (int i=0;i<n;i++)
//     {  
//         sum1=sum1+a[i];
       
//         float xxx=a[i];
//          sum=ceil(xxx/xx)+sum;
//     }
//        //  int s=
//        //cout<<sum<<endl;
      
//         {cout<<ceil(sum1/xx)<<" "<<sum<<endl;
//        // break;
      
//     }
// }
// }
#include<bits/stdc++.h>
using namespace std;
# define m  1000000007
#define vmaxi(a)  max_element(a.begin(),a.end())-a.begin()
#define vmini(a)  min_element(a.begin(),a.end())-a.begin()
#define vmax(a) *max_element(a.begin(),a.end())
#define vmin(a) *min_element(a.begin(),a.end())
#define fsort(a) sort(a.begin(),a.end())
#define rsort(a) sort(a.rbegin(),a.rend())
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define vall(a) (a.begin(),a.end())
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pi pair<int,int>
# define ll long long int
#define ld long double
# define nl cout<<endl;
# define prt(v)  for (auto e:v) {cout<<e<<' ';}nl
#define inp(v) for(auto &e:v){cin>>e;}
# define contain_ele(v,i)  count(v.begin(), v.end(), i) //returns true or false
#define fre(str,M)  for (auto i:str){if (M.find(i) == M.end()){M.insert(make_pair(i, 1));}else{M[i]++;}}
#define fp first
#define sp second
#define pb push_back
#define mp make_pair
#define rev(a,i,j) reverse(a.begin()+i,a.end()+j+1) 
bool isInt(double a){
return (floor(a)==ceil(a));
}
bool isPow2(ll n)
{
    return (isInt(log2(n))) ? false : true;
}


void solve()
{
    ll n,x;    
    cin>>n>>x;
    int arr[n];
    ll sum=0;
    for (int i = 0; i <n; i++)
    {
       cin>>arr[i];
       sum+=arr[i];
    }
    ll sum1=0;
        ld xx=x;
    for (int i = 0; i < n; i++)
    {  
        ld xxx=arr[i];
        sum1+=ceil(xxx/xx);
    }
    ld summm=sum;
    ll ans=ceil(summm/xx);
    cout<<ans<<" "<<sum1<<endl;

    
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}