#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
     int n,count=0;;
     cin>>n;
    //  vector<int>a;
    // //  for(int i=0; n>0; i++)    
    // // {    
    // //     a[i]=n%2;    
    // //     n= n/2;  

    // // }
    
    int c = (int)(log2(n));
   
    // binary output
    // using the inbuilt function
    
     string bt=bitset<64>(n).to_string().substr(64 - c- 1);
  
    for(int i=0;i<bt.size();i++)
    {
        if(bt[i]=='1'){
            count++;
        }
    }
    
    cout<<count-1<<endl;
     
    }
}
	// your code goes here
	//return 0;
