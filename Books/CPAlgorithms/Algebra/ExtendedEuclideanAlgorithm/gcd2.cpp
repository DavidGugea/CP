#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b, int& x, int& y) {
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}

	int x1, y1;

	int d = gcd(b, a % b, x1, y1);
	x = y1;
	y = x1 - y1 * (a / b);
	return d;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a; cin >> a;
	int b; cin >> b;
	int x, y;

	int res = gcd(a, b, x, y);

	cout << "res: " << res << "\n";
	cout << x << " " << y << "\n";

	return 0;




























