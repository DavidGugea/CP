#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vector<long long> fib {0LL};

	long long a = 0;
	long long b = 1;
	long long c;

	while (b <= n) {
		fib.push_back(b);

		c = a + b;
		a = b;
		b = c;
	}
	
	if (fib[fib.size()-1] == n) {
		cout << "0 0 " << n << "\n";
	} else {
		cout << "I'm too stupid to solve this problem\n";
	}


	return 0;
}