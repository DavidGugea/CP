#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	double n; cin >> n;
	double res = 0;
	for (int i = 0; i < n; ++i) {
		double val; cin >> val;
		res += val / 100;
	}

	cout << res / n * 100 << "\n";

	return 0;
}