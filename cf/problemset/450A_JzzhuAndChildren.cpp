#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int m; cin >> m;
	vector<pair<int, int>> children;
	int val;

	for (int i = 0 ; i < n; ++i) {
		cin >> val;
		children.push_back(make_pair(val, i));
	}

	/*
	n children
	1->n
	i-th child at least a_i candles.
	i_th child stands at the i-th place of the line.

	1. Give m candies to the first child of the line.
	2. Not enough candies -> child goes to the end of the line, else go home.
	3. Repeat the first two steps while the line is not empty.

	// Consider all the children in the order they go home.
	// Which child will be the last in this order ?
	*/

	vector<int> out;

	while (!children.empty()) {
		pair<int, int> cp = children[0];
		children.erase(children.begin());

		if (m >= cp.first) {
			out.push_back(cp.second + 1);
		} else {
			children.push_back(make_pair(cp.first - m, cp.second));
		}
	}

	cout << out[out.size()-1] << "\n";

	return 0;
}