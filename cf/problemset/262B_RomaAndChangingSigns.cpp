#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] < 0)
        {
            a[i] = -a[i];
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

    return 0;
}