#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (a[i] < 0)
        {
            a[i] *= -1;
            --k;

            if (k == 0)
            {
                break;
            }
        }
        else
        {
            break;
        }
    }

    sort(a.begin(), a.end());

    if (k > 0 && (k % 2 != 0))
    {
        a[0] *= -1;
    }

    ll count = 0;
    for (int i = 0; i < n; ++i)
    {
        count += a[i];
    }
    cout << count << "\n";

    return 0;
}