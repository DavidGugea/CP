#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;

	int l_0 = 0;
	int l_1 = 0;
	int r_0 = 0;
	int r_1 = 0;

	for (int i = 0 ; i < n; ++i) {
		int l, r;
		cin >> l >> r;

		if (l == 0) {
			l_0++;
		} else {
			l_1++;
		}

		if (r == 0) {
			r_0++;
		} else {
			r_1++;
		}
	}

	int res = 0;
	if (r_1 > r_0)  {
		res += r_0;
	} else {
		res += r_1;
	}

	if (l_1 > l_0) {
		res += l_0;
	} else {
		res += l_1;
	}

	cout << res << "\n";

	return 0;
}