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

bool find_any_solution(int a, int b, in c, int& x0, int &y0, int& g) {
	g = gcd(abs(a), abs(b), x0, y0);
	if (c % g) {
		return false;
	}

	x0 *= c / g;
	y0 *= c / g;

	if (a < 0) x0 = -x0;
	if (b < 0) y0 = -y0;

	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, int b, x, y;
	cin >> a >> b;

	bool res = find_any_solution(a, b, c, x, y, -1);

	if (res) {
		cout << "x: " << x << " | y: " << y << "\n";
	} else {
		cout << "Couldn't find any solution to the linear diophantine equation\n";
	}

	return 0;
}