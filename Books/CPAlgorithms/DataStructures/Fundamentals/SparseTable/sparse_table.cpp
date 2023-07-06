#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100'005;
const int LOG = 17;
int bin_log[MAX_N];

int min_query(int L, int R)
{
    int length = R - L + 1;
    int k = bin_log[length];
    return min(m[L][k], m[R - (1 << k) + 1][k]);
}

int main()
{
    // input
    int n;
    cin >> n;
    bin_log[1] = 0;
    for (int i = 2; i <= n; ++i)
    {
        bin_log[i] = bin_log[i / 2] + 1;
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        m[i][0] = a[i];
    }

    // preprocess in O(n*log(n))
    for (int k = 1; i < LOG; ++k)
    {
        for (int i = 0; i + (1 << k) - 1 < n; ++i)
        {
            m[i][k] = min(m[i][k - 1], m[i + (1 << (k - 1))][k - 1]);
        }
    }

    // answer queries
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int L, R;
        cin >> L >> R;
        cout << min_query(L, R) << "\n";
    }
}