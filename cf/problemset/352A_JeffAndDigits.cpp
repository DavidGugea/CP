#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int f = 0;
	int z = 0;
	int val;

	for (int i = 0 ; i < n; ++i) {
		cin >> val;

		if (val == 5) {
			++f;
		} else {
			++z;
		}
	}

	// divisible by 9 and 10
	// 0 (5*9)

	if (z == 0) {
		cout << -1 << "\n";
		return 0;
	}

	if (f < 9) {
		cout << 0 << "\n";
		return 0;
	}

	while (f != 0 && f % 9 != 0) {
		--f;
	}

	for (int i= 0 ; i < f; ++i) {
		cout << 5;
	}

	for (int i = 0 ;i < z; ++i) {
		cout << 0;
	}

	cout << "\n";

	return 0;
}