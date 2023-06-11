#include <bits/stdc++.h>

using namespace std;

void print_primes(int n) {
	vector<int> primes;
	int nsqrt = sqrt(n);
	vector<int> nums(nsqrt + 1, true);

	for (int i = 2; i <= nsqrt; ++i) {
		if (nums[i]) {
			for (int j = i * i; j <= nsqrt; j += i) {
				nums[j] = false;
			}

			primes.push_back(i);
		}
	}

	int S = 10;
	vector<char> block(S);
	for (int k = 0; k * S <= n; ++k) {
		fill(block.begin(), block.end(), true);
		int start = k * S;

		for (int p : primes) {
			int j;
			if (k == 0) {
				j = p * p;
			} else {
				j = p * (start/p) - start;
			}

			for (; j <= S; j += p) {
				block[j] = false;
			}
		}

		if (k == 0)
			block[0] = block[1] = false;

		for (int i = 0; i < block.size(); ++i) {
			if (block[i]) {
				cout << start + i << "\n";
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	print_primes(n);

	return 0;
}