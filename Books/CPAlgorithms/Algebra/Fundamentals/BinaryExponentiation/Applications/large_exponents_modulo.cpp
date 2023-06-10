#include <bits/stdc++.h>

using namespace std;

long long binpow(long long a, long long b, long long m) {
	a %= m;
	long long res = 1;

	while (b > 0) {
		if (b & 1)
			res *= a;

		a *= a % m;
		b >>= 1;
	}

	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long a; cin >> a;
	long long b; cin >> b;
	long long m; cin >> m;

	// a^b % m
	cout << binpow(a, b, m) << "\n";

	return 0;
}