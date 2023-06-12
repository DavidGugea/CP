#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<vector<int>> g;

	for (int i = 0; i < 5; ++i) {
		vector<int> g_n;
		for (int j = 0; j < 5 ; ++j) {
			int val; cin >> val;
			g_n.push_back(val);
		}
		g.push_back(g_n);
	}

	vector<int> perms = {0, 1, 2, 3, 4};
	int res = -1;
	do {
		int sum = (g[perms[0]][perms[1]] + g[perms[1]][perms[0]]) + (g[perms[1]][perms[2]] + g[perms[2]][perms[1]]) + 2*(g[perms[2]][perms[3]] + g[perms[3]][perms[2]]) + 2*(g[perms[3]][perms[4]] + g[perms[4]][perms[3]]);

		res = max(res, sum);
	} while (next_permutation(perms.begin(), perms.end()));

	cout << res << "\n";

	return 0;
}