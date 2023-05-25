#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v {-1, 2, 4, -3, 5, 2, -5, 2};
	int n = v.size();

	int best = 0;

	for (int a = 0 ; a < n; ++a) {
		int sum = 0;

		for (int b = a; b < n; ++b) {
			sum += v[b];
			best = max(best, sum);
		}
	}

	cout << best << "\n";

	return 1;
}