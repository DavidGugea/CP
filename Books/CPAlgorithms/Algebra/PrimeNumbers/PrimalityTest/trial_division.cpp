#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x) {
	for (int d = 2; d * d <= x; ++d)
		if (x % d == 0)
			return false;

	return x >= 2;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	bool res = isPrime(n);
	cout << res << "\n";

	return 0;
}