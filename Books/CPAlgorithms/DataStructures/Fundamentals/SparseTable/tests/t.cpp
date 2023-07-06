#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> loghm;
int a[n][floor(log2(n))];

int minquery(int L, int R)
{
    int length = R - L + 1;
    int k = loghm[length];
    return min(a[L][k], a[R - (1 << k) + 1][k]);
}

int main()
{
    int n;
    cin >> n;

    loghm.insert(make_pair(1, 0));
    for (int i = 2; i <= n; ++i)
    {
        loghm.insert(make_pair(i, loghm(i / 2) + 1));
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        a[i][0] = a[i];
    }

    for (int k = 1; i < floor(log2(n)); ++k)
    {
        for (int i = 0; i + (1 << k) - 1 < n; ++i)
        {
            m[i][k] = min(m[i][k - 1], m[i + (1 << (k - 1))][k - 1]);
        }
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int l, r;
        cin >> l >> r;
        cout << minquery(l, r) << "\n";
    }
}