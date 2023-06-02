#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int m; cin >> m;

	int res = 0;

	for (int i = 0 ; i <= max(n,m); ++i) {
		for (int j = 0; j <= max(n,m); ++j) {
			if (pow(i,2)+j==n && i+pow(j,2) == m) {
				++res;
			}
		}
	}

	cout << res << "\n";

	return 0;
}