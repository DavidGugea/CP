#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int m; cin >> m;

	vector<int> v;
	int s = INT_MAX;
	int b = -1;
	int res;

	int val;
	for (int i = 0 ; i < m; ++i) {
		cin >> val;
		v.push_back(val);

		if (i < n) {
			s = min(s, val);
			b = max(b, val);
		}
	}

	res = abs(s-b);

	int i = 0;
	int j = n-1;

	while (j < v.size()) {
		s = min(s, v[j+1]);
		b = max(b, v[j+1]);
		res = min(res, abs(s-b));

		++i;
		++j;
	}

	cout << res << "\n";

	return 0;
}