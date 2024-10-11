#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    int n, ans = 0,i=9;
    cin >> n;

    while (n != 0)
    {
        if (a[i]<=n)
        {
            n = n - a[i];
            ans++;
        }
        else{
            i--;
        }
    }

    cout << ans;
    return 0;
}