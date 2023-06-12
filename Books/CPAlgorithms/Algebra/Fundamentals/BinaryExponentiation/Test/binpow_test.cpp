#include <bits/stdc++.h>

using namespace std;

long long binpow(long long a, long long b) {
	if (b == 0)
		return 1;

	long long res = binpow(a, b / 2);
	if (b % 2)
		return res * res * a;
	else
		return res * res;
}

long long binpow_iterative(long long a, long long b) {
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

	return 0;
}