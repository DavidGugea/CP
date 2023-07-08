#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, s, t;
    cin >> n >> s >> t;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    int res = 0;
    while (s != t && a[s] != 0)
    {
        int temp = a[s];
        a[s] = 0;
        s = temp;
        res += 1;
    }

    if (s == t)
    {
        cout << res << "\n";
    }
    else
    {
        cout << "-1\n";
    }

    return 0;
}