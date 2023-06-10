#include <bits/stdc++.h>

using namespace std;

int linear_sieve() {
	const int N = 10000000;
	vector<int> lp(N+1);
	vector<int> pr;

	for (int i = 2; i <= N; ++i) {
		if (lp[i] == 0) {
			lp[i] = i;
			pr.push_back(i);
		}

		for (int j = 0; i * pr[j] <= N; ++j) {
			lp[i * pr[j]] = pr[j];

			if (pr[j] == lp[i])
				break;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	return 0;
}