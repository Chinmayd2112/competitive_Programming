#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << "1"
                 << " "
                 << "1" << endl;
                else
                {
        for (int i = 2; i < 100000; i++)

        {
            if (n == i * i)
            {
                cout << i << " "
                     << "1" << endl;
                break;
            }
            else if ((i - 1) * (i - 1) < n && n < (i * i))
            {
                //   cout<<i<<" "<<endl;
                if (n > (((i * i) - (i - 1) * (i - 1)) / 2 + (i - 1) * (i - 1)) && n <= (i * i))
                {
                    cout << i << " " << (i * i) - n + 1  <<endl;
                    break;
                }
                else
                {
                    cout << n - (i - 1) * (i - 1) << " " << i << endl;
                    break;
                }
            }
        }
                }
    }
}