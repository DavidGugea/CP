#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vector<int> a;
	for (int i = 0 ; i < n; ++i) {
		int val; cin >> val;
		a.push_back(val);
	}

	int m; cin >> m;
	vector<int> b;

	for (int i = 0 ; i < m; ++i) {
		int val; cin >> val;
		b.push_back(val);
	}

	unordered_map<int, int> mp;
	int res = -1;

	for (int i = 0 ; i < a.size(); ++i) {
		for (int j = 0; j < b.size(); ++j) {
			int bj = b[j];
			int ai = a[i];

			if (bj % ai == 0) {
				int ratio = bj/ai;
				res = max(res, ratio);

				auto it = mp.find(ratio);

				if (it == mp.end()) {
					mp.insert(make_pair(ratio, 1));
				} else {
					mp[ratio] = it->second+1;
				}
			}
		}
	}

	auto it = mp.find(res);

	if (it != mp.end()) {
		cout << it->second << "\n";
	}

	return 0;
}