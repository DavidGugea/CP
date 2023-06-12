#include <bits/stdc++.h>

using namespace std;

void default_sieve(int N) {
	vector<bool> is_prime(N+1, true);
	is_prime[0] = is_prime[1] = false;

	for (int i = 2; i < sqrt(N); ++i) {
		if (is_prime[i]) {
			for (int j = i * i; j <= N; j += i)
				is_prime[j] = false;
		}
	}

	for (int i = 0; i < is_prime.size(); ++i) {
		if (is_prime[i])
			cout << i << "\n";
	}
}

void linear_sieve(int N) {
	vector<int> lp(N+1);
	vector<int> pr;

	for (int i = 2; i <= N; ++i) {
		if (lp[i] == 0) {
			lp[i] = i;
			pr.push_back(i);
		}

		for (int j = 0;  i * pr[j] <= N; ++j) {
			lp[i * pr[j]] = pr[j];

			if (pr[j] == lp[i])
				break;
		}
	}

	for (int p : pr)
		cout << p << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	cout << "DEFAULT SIEVE -------------------\n";
	default_sieve(N);
	cout << "LINEAR SIEVE --------------------\n";
	linear_sieve_2(N);

	return 0;
}