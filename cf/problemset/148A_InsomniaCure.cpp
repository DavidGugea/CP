#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k, l, m, n;
	int d;

	cin >> k >> l >> m >> n >> d;

	int res = 0;

	for (int i = 1 ; i <= d; ++i) {
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
			++res;
		}
	}

	cout << res << "\n";

	return 0;
}