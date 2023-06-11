#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vector<bool> is_prime(n+1, true);
	is_prime[0] = is_prime[1] = false;

	for (long long i = 2; i < sqrt(n); ++i) {
		if (is_prime[i]) {
			for (long long j = i * i; j <= n; j += i) {
				is_prime[j] = false;
			}
		}
	}

	for (int i = 0 ; i < is_prime.size(); ++i) {
		if (is_prime[i])
			cout << i << "\n";
	}

	return 0;
}