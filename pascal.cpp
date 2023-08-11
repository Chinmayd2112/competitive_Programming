#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
  vector<vector<int>> r(t);

        for (int i = 0; i < t; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
      for (int i = 0; i < t; i++) {
        for (int j = 0; j <= i; j++) {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }

}