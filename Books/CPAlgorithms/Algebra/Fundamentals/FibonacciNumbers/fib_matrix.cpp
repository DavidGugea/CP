#include <bits/stdc++.h>

using namespace std;

struct matrix {
	long long mat[2][2];

	matrix friend operator * (const martix &a, const martix &b) {
		matrix c;

		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < 2; ++j) {
				c.mat[i][j] = 0;
				for (int k = 0; k < 2; ++k) {
					c.mat[i][j] += a.mat[i][j] * b.mat[k][j];
				}
			}
		}

		return c;
	}
}

matrix matpow(matrix base, long long n) {
	matrix ans{
		{
			{1, 0},
			{0, 1}
		}
	};

	while (n) {
		if (n & 1)
			ans *= base;

		base *= base;
		n >>= 1;
	}

	return ans;
}

long long fib (int n) {
	matrix base {
		{
			{1, 1},
			{1, 0}
		}
	};

	return matpow(base, n).mat[0][1];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int res = fib(n);
	cout << res << "\n";

	return 0;
}