#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    swap(a[0], a[n - 1]);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}