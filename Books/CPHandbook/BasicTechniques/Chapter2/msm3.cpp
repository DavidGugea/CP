#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v {-1, 2, 4, -3, 5, 2, -5, 2};
	int n = v.size();

	int best = -INT_MAX, sum = 0;
	for (int k = 0; k < n; ++k) {
		sum = max(v[k], sum + v[k]);
		best = max(best, sum);
	}

	cout << best << "\n";

	return 1;
}