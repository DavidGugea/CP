#include <bits/stdc++.h>

using namespace std;

void print_primes(int n) {
	const int S = 10;

	vector<int> primes; // PRIMES INSIDE INTERVAL [1...SQRT(N)]
	int nsqrt = sqrt(n);
	vector<char> is_prime(nsqrt + 1, true);
	for (int i = 2; i <= nsqrt; ++i) {
		if (is_prime[i]) {
			primes.push_back(i);
			for (int j = i * i; j <= nsqrt; j += i)
				is_prime[j] = false;
		}
	}

	int result = 0;
	vector<char> block(S);
	for (int k = 0 ; k * S <= n; ++k) {
		fill(block.begin(), block.end(), true);
		int start = k * S; // start number in the block [ks, ks+s-1]
		for (int p : primes) {
			int j; // j represents the index inside the block where we are currently in where we have the index of p * p
			if (k == 0) {
				j = p * p;
			} else {
				j = p * (start/p)-start;
			}
			for (; j < S ; j += p)
				block[j] = false;
		}

		if (k == 0)
			block[0] = block[1] = false;

		for (int i = 0; i < S && start + i <= n; ++i) {
			if (block[i])
				cout << start+i << "\n";
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	/*
	keep the prime numbers until the root of n, prime[1...sqrt(n)], split the complete range into blocks, and sieve each block separately.

	constants s -> size of block
	ceil(n/s) blocks altogether

	[ks; ks+s-1]

	for every block k we will go through all the prime numbers (From 1 to sqrt(n)) and perform sieving using them.
	*/

	int n; cin >> n;
	print_primes(n);

	return 0;
}