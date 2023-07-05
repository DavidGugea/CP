#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, y;
    cin >> x >> y;
    int g = extended_euclidean(a, m, x, y);
    if (g != 1)
    {
        cout << "No solution!";
    }
    else
    {
        x = (x % m + m) % m;
        cout << x << "\n";
    }

    return 0;
}