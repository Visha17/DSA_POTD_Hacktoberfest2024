#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};  //Created array of values taken by factorials 1 to 10
    int n, ans = 0,i=9;  //n is value entered by the user, i is iterator, ans stores final answer
    cin >> n;

    while (n != 0) //Loops till the n==0 i.e. change is returned successfully
    {
        if (a[i]<=n)
        {
            n = n - a[i]; //if factorial value is less than or equals to remaining change value than change is updated
            ans++; //operation number increamented
        }
        else{
            i--; //if factorial value is greater than iterator value is now updated

        }
    }

    cout << ans; //final answer print
    return 0;
}