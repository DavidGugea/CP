#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int m; cin >> m;

	vector<int> p;

	for (int i = 0 ; i < n; ++i) {
		int val; cin >> val;
		p.push_back(val);
	}

	sort(p.begin(), p.end());

	int res = 0;
	for (int i = 0 ; i < m; ++i) {
		if (p[i] > 0) break;
		res += -p[i];
	}

	cout << res << "\n";

	return 0;
}