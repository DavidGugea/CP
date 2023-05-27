#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int lowest, highest;
	cin >> lowest;
	highest = lowest;
	int res = 0;

	for (int i = 0 ; i < n - 1; ++i) {
		int val; cin >> val;
		if (val < lowest) {
			lowest = val;
			++res;
		}
		if (val > highest) {
			highest = val;
			++res;
		}
	}

	cout << res << "\n";

	return 0;
}