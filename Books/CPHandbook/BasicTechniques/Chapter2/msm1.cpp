// maximum subarray sum
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v {-1, 2, 4, -3, 5, 2, -5, 2};
	int n = v.size();

	int best = 0;
	for (int a = 0 ; a < n; ++a) {
		for (int b = a; b < n; ++b) {
			int sum = 0;
			for (int k = a; k <= b; ++k) {
				sum += v[k];
			}
			best = max(best, sum);
		}
	}

	cout << best << "\n";

	return 1;
}