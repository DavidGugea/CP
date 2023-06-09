#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int m; cin >> m;

    vector<string> result;

    string initrow; cin >> initrow;

    string tmpinitrow = "";
    for (int i = 0; i < initrow.size(); ++i) {
        if (initrow[i] == '-') {
            tmpinitrow += initrow[i];
            continue;
        }

        if (i > 0 && tmpinitrow[i-1] == 'W') {
            tmpinitrow += 'B';
        } else {
            tmpinitrow += 'W';
        }
    }

    result.push_back(tmpinitrow);

    for (int i = 1; i < n; ++i) {
        string row; cin >> row;
        string tmp = "";

        if (row[0] == '.') {
            if (result[i-1][0] == 'W') {
                tmp += 'B';
            } else {
                tmp += 'W';
            }
        } else if (row[0] == '-') {
            tmp += row[0];
        }

        for (int j = 1; j < row.size(); ++j) {
            if (row[j] == '-') {
                tmp += row[j];
                continue;
            }

            if (
                (result[i-1][j] == 'W')
                ||
                (row[j-1] == 'W')
            ) {
                tmp += 'B';
            } else {
                tmp += 'W';
            }
        }

        result.push_back(tmp);
    }

    for (string res : result) {
        cout << res << "\n";
    }

    return 0;
}