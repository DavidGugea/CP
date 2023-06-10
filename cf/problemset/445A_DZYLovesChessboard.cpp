#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int m; cin >> m;

    for (int i = 0; i < n; ++i) {
        string row; cin >> row;

        for (int j = 0 ; j < row.size(); ++j) {
            if (row[j] == '.') {
                if ((i + j) & 1 == 0) {
                    row[j] = 'W';
                } else {
                    row[j] = 'B';
                }
            }
        }

        cout << row << "\n";
    }

    return 0;
}