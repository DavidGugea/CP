#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int m; cin >> m;

	vector<int> v;
	int val;
	for (int i = 0 ; i < m; ++i) {
		cin >> val;
		v.push_back(val);
	}

	sort(v.begin(), v.end());

	int res = INT_MAX;

	for (int i = 0 ; i < m-n+1; ++i) {
		res = min(res, (v[i+n-1]-v[i]));
	}

	cout << res << "\n";

	return 0;
}