#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
	int a = 0;
	int b = 1;
	for (int i = 0; i < n; ++i) {
		cout << a << " ";
		int tmp = a + b;
		a = b;
		b = tmp;
	}

	return a;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int res = fib(n);

	cout << res << "\n";

	return 0;
}