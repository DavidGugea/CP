#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	/*
	n dragons 
	s strength
	defeat x_i, get y_i
	don't defeat x_i, lose
	*/

	int s; cin >> s;
	int n; cin >> n;

	int tx = 0;
	int ty = 0;

	vector<pair<int, int>> vp;

	for (int i = 0 ; i < n; ++i) {
		int x; cin >> x;
		int y; cin >> y;

		if (s > x) {
			s += y;
		} else {
			vp.push_back(make_pair(x, y));
		}
	}

	sort(vp.begin(), vp.end(), [](auto &left, auto &right) {
		return left.first < right.first;
	});

	/*
	cout << "s: " << s << "\n";
	for (pair<int, int> pii : vp) {
		cout << pii.first << " " << pii.second << "\n";
	}
	*/

	for (pair<int, int> pii : vp) {
		if (s > pii.first) {
			s += pii.second;
		} else {
			cout << "NO\n";
			return 0;
		}
	}

	cout << "YES\n";

	return 0;
}