#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;

	vector<vector<int>> v {{0}, {0,1,0}, {0,1,2,1,0}};

	for (int i = 3; i <= n; ++i) {
		vector<int> nv;
		for (int j = 0; j <= i; ++j) {
			nv.push_back(j);
		}
		for (int x = i-1; x >= 0; --x) {
			nv.push_back(x);
		}
		v.push_back(nv);
	}

	for (int i = n-1 ; i >= 0; --i) {
		v.push_back(v[i]);
	}

	for (vector<int> r : v) {
		int sp = v[n].size()-r.size();

		for (int j = 0; j < sp; ++j) {
			cout << " ";
		}

		for (int i = 0 ; i < r.size(); ++i) {
			if (i == r.size() - 1) {
				cout << r[i];
			} else {
				cout << r[i] << " ";
			}
		}

		cout << "\n";
	}

	return 0;
}