#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long double n, m, a;
	cin >> n >> m >> a;

	long long x = ceil(n / a);
	long long y = ceil(m / a);

	cout << x * y << "\n";

	return 0;
}