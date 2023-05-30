#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int x, y, z;
	cin >> x >> y >> z;

	double a, b, c;
	a = sqrt(z*x/y);
	c = a*y/x;
	b = x/a;

	cout << 4 * (int)(a+b+c) << "\n";

	return 0;
}