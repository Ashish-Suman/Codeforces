#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q, k;
    cin >> n >> q >> k;
    int a[n + 2], sum[n + 1] = { 0 };
    a[0] = 1;
    a[n + 1] = k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
        
    sum[1] = a[2] - 2;

    for (int i = 2; i <= n; i++)
    {
        sum[i] = sum[i - 1] + a[i + 1] - a[i - 1] - 2; //sum[i-1] + (a[i+1]-1) - (a[i-1]+1)
        cout << i << "\t"; 
    }
    cout << endl;
    int l, r;
    while (q--)
    {
        cin >> l >> r;
        cout << (sum[r - 1] - sum[l] + (a[l + 1] - 2) + (k - a[r - 1] + 1)) << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    // while (t--)
    solve();
    return 0;
}
