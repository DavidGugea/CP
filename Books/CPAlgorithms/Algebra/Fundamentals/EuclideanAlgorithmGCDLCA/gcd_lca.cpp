#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a; cin >> a;
	int b; cin >> b;

	cout << "GCD: " << gcd(a, b) << "\n";
	cout << "LCM: " << lcm(a, b) << "\n";

	return 0;
}