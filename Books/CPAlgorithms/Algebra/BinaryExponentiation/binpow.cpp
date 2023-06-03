#include <bits/stdc++.h>

using namespace std;

long long binpowr(long long a, long long b) {
	if (b == 0) {
		return 1;
	} else if (b == 1) {
		return a;
	}

	long long res = binpowr(a, b >> 1);

	if (b & 1) {
		return res * res * a;
	} else {
		return res * res;
	}
}

long long binpowi(long long a, long long b) {
	long long res = 1;

	while (b > 0) {
		if (b & 1)
			res *= a;

		a *= a;
		b >>= 1;
	}

	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long a; cin >> a;
	long long b; cin >> b;

	cout << binpowi(a, b) << "\n";

	return 0;
}
