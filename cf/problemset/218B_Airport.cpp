#include <bits/stdc++.h>

using namespace std;

int get_min(int n, vector<int> val) {
	sort(val.begin(), val.end());

	int res = 0;
	bool done = false;

	for (int i = 0; i < val.size(); ++i) {
		if (done) break;

		while (val[i] > 0) {
			res += val[i];
			val[i]--;
			n -= 1;

			if (n == 0) {
				done = true;
				break;
			}
		}
	}

	return res;
}

int get_max(int n, vector<int> val) {
	sort(val.rbegin(), val.rend());

	
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

	int min_res = get_min(n, v);
	int max_res = get_max(n, v);

	cout << max_res << " " << min_res << "\n";

	return 0;
}