#include <bits/stdc++.h>

using namespace std;

int get_min(int n, vector<int> v) {
	sort(v.begin(), v.end());

	int i = 0;
	int res = 0;
	while (n > 0) {
		while (v[i] > 0) {
			res += v[i];
			v[i]--;
			n--;

			if (n == 0) break;
		}

		++i;
	}

	return res;
}

int get_max(int n, vector<int> v) {
	priority_queue<int> ql;
	for (int d : v) {
		ql.push(d);
	}

	int res = 0;
	while (n--) {
		int t = ql.top(); ql.pop();
		res += t;

		t--;
		ql.push(t);
	}

	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int m; cin >> m;
	vector<int> v;
	int val;
	for (int i = 0; i < m; ++i) {
		cin >> val;
		v.push_back(val);
	}

	int res1 = get_min(n, v);
	int res2 = get_max(n, v);

	cout << res2 << " " << res1 << "\n";

	return 0;
}