#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long x = 1;
	long long n;
	long long m;

	cin >> n >> m;

	for (int i = 2 ; i <= n; ++i) {
		x *= i % m;
	}

	cout << x % m << "\n";

	return 1;
}
