#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int m; cin >> m;

    vector<string> res;

    for (int i = 0; i < n; ++i) {
        string row; cin >> row;
        string add = "";

        for (int j = 0; j < row.size(); ++j) {
            if (row[j] == '-') {
                add += '-';
                continue;
            }

            if (
                (add[add.size()-1] != 'B')
                && 
                (i > 0 && res[i-1][j] != 'B')
            ) {
                cout << "ADDED W: " << add[add.size()-1] << "\n";
                add += 'W';
            } else {
                add += 'B';
            }
        }

        res.push_back(add);
    }

    for (string s : res) {
        cout << s << "\n";
    }

    return 0;
}