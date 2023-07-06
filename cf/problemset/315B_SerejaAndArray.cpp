#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int increase = 0;

    for (int i = 0; i < m; ++i)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            int i, v;
            cin >> i >> v;
            a[i - 1] = v - increase;
        }
        else if (op == 2)
        {
            int y;
            cin >> y;
            increase += y;
        }
        else if (op == 3)
        {
            int i;
            cin >> i;
            cout << a[i - 1] + increase << "\n";
        }
    }

    return 0;
}