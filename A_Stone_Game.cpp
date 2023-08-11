#include <bits/stdc++.h>
using namespace std ; 
# define ll long long int

int main ()
{
    int t ;
    cin >> t ;
    while ( t --)
    {
        int n ;
        cin >> n ;
        int maxi = 0 ; 
        int mini = INT_MAX ;
        int mx , mn ;
        vector <int> v ;
        int temp ;
        for ( int i = 0 ; i < n ; i ++)  
        {
            cin >> temp ;
            if ( temp > maxi ) 
            {
                maxi = temp ;
                mx = i ;

            }
            if ( temp < mini ) 
            {
                mini = temp ;
                mn = i ;
            } 
        }
        int tr ;
        if ( mn < mx ) 
        {
            tr = min ( mn + n - mx + 1 , mx + 1 );
            cout << min ( tr , n - mn )<< endl ;
        }
        else
        {
            tr = min ( mx + n - mn + 1 , mn + 1 );
            cout << min ( tr , n - mx )<< endl ;;
        }
        
        
        

    }
    return 0 ; 
}