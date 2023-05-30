#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n; cin >> n;
	vector<pair<int, int>> v;
	int x, y;

	for (int i = 0 ; i < n; ++i) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	int res = 0;

	for (int i = 0; i < n; ++i) {
		bool up = false;
		bool down = false;
		bool left = false;
		bool right = false;

		for (int j = 0; j < n; ++j) {
			if (i == j) continue;

			if (v[i].first > v[j].first && v[i].second == v[j].second) {
				right = true;
			}

			if (v[i].first < v[j].first && v[i].second == v[j].second) {
				left = true;
			}

			if (v[i].first == v[j].first && v[i].second < v[j].second) {
				up = true;
			}

			if (v[i].first == v[j].first && v[i].second > v[j].second) {
				down = true;
			}
		}

		if (up && down && left && right) {
			++res;
		}
	}

	cout << res << "\n";

	return 0;
}