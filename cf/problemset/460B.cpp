#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll sod(ll in)
{
    ll res = 0;
    while (in)
    {
        res += (in % 10);
        in /= 10;
    }
    return res;
}

ll poww(ll a, ll b)
{
    ll res = 1;
    for (int i = 1; i <= b; ++i)
    {
        res *= a;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll a, b, c;
    cin >> a >> b >> c;
    vector<int> res;
    for (ll i = 1; i <= 81; ++i)
    {
        ll calc = b * poww(i, a) + c;
        if (sod(calc) == i && calc < 1e9)
        {
            res.push_back(calc);
        }
    }

    cout << res.size() << "\n";
    for (ll i : res)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}