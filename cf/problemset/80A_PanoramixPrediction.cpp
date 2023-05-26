#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {
	for (int i = 2 ; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int np(int n) {
	int i = n + 1;
	while (true) {
		if (is_prime(i))
			break;
		else
			++i;
	}
	return i;
}

void solve(int n, int m) {
	int next_prime = np(n);
	if (next_prime == m) {
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	if (m <= n) cout << "NO\n";
	else solve(n, m);

	return 0;
}
