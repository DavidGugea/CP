#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	--k;

	vector<int> a(n);
	bool all_equal_flag = true;
	for (int i = 0; i < n; ++i) {
		int val; cin >> val;
		a[i] = val;

		if (i > 0 && a[i] != a[i-1]) {
			all_equal_flag = false;
		}
	}

	if (all_equal_flag) {
		cout << "0\n";
		return 0;
	}

	bool flag = true;

	if (k != n-1) {
		for (int i = k; i < n-1; ++i) {
			if (a[i] != a[i+1]) {
				flag = false;
				break;
			}
		}
	}

	if (!flag) {
		cout << "-1\n";
		return 0;
	}

	int i = k-1;
	while (a[i] == a[n-1]) {
		--i;
	}

	cout << i+1 << "\n";

    return 0;
}
