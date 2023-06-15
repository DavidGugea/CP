#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	unordered_map<int, int> a;
	for (int i = 1; i <= 7; ++i) {
		a.insert(make_pair(i, 0));
	}

	for (int i = 0; i < n; ++i) {
		int val; cin >> val;
		a[val]++;
	}

	if (a[5] != 0 || a[7] != 0) {
		cout << "-1\n";
		return 0;
	}

	vector<tuple<int, int, int>> v{
		{1, 2, 4},
		{1, 2, 6},
		{1, 3, 6},
	};

	vector<string> res;
	for (tuple<int, int, int> t : v) {
		int i = get<0>(t);
		int j = get<1>(t);
		int k = get<2>(t);

		while (a[i] != 0 && a[j] != 0 && a[k] != 0) {
			string s = to_string(i) + " " + to_string(j) + " " + to_string(k) + "\n";
			res.push_back(s);

			a[i]--;
			a[j]--;
			a[k]--;
		}
	}

	if (a[1] != 0 || a[2] != 0 || a[3] != 0 || a[4] != 0 || a[6] != 0) {
		cout << "-1\n";
	} else {
		for (string s : res) {
			cout << s;
		}
	}

	return 0;
}