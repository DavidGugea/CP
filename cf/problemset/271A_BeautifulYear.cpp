#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	while (true) {
		n += 1;

		int a = n / 1000; // 1989 / 1000 -> 2
		int b = n / 100 % 10; // 1989 / 100 % 10-> 9
		int c = n / 10 % 10; // 1989 / 100 % 10-> 8
		int d = n % 10; // 1989 / 100 % 10-> 8

		if (a != b && a != c && a != d && b != c && b != d && c != d)
			break;
	}

	cout << n << "\n";

	return 0;
}