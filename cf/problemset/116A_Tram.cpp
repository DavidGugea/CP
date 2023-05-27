#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int val = 0;
	int res = -1;
	for (int i = 0; i < n; ++i) {
		int l; cin >> l;
		int r; cin >> r;
		val -= l;
		val += r;

		if (val > res) {
			res = val;
		}
	}

	cout << res << "\n";

	return 0;
}