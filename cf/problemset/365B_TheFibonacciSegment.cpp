#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << "\n";
        return 0;
    }

    vector<int> a(n);
    int start = 0;
    int mx = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];

        if (i <= 1)
        {
            continue;
        }

        if (a[i] == a[i - 1] + a[i - 2])
        {
            if (start == -1)
            {
                start = i - 2;
            }

            mx = max(mx, (i - start + 1));
        }
        else
        {
            start = -1;
        }
    }

    cout << max(mx, 2) << "\n";

    return 0;
}