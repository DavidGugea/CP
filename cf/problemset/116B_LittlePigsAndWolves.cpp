#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    vector<vector<char>> k(a);
    for (int i = 0; i < a; ++i)
    {
        vector<char> av(b);
        for (int j = 0; j < b; ++j)
        {
            cin >> av[j];
        }
        k[i] = av;
    }

    int res = 0;

    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            char x = k[i][j];

            if (x != 'W')
            {
                continue;
            }
            else
            {
                if (i > 0 && k[i - 1][j] == 'P')
                {
                    k[i - 1][j] = 'x';
                    ++res;
                }
                else if (j > 0 && k[i][j - 1] == 'P')
                {
                    k[i][j - 1] = 'x';
                    ++res;
                }
                else if (j < (k[i].size() - 1) && k[i][j + 1] == 'P')
                {
                    k[i][j + 1] = 'x';
                    ++res;
                }
                else if (i < (a - 1) && k[i + 1][j] == 'P')
                {
                    k[i + 1][j] = 'x';
                    ++res;
                }
            }
        }
    }

    cout << res << "\n";

    return 0;
}