#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, ans = 0;
    cin >> a >> b;
    while (a)
    {
        if (a == b || b == 1 || (a - b) > 100)
        {
            b += 1;
            ans++;
        }
        a = a / b;
        ans++;
        cout << a << "  " << ans << endl;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}