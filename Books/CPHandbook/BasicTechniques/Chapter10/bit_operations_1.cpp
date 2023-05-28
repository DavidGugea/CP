#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n = 8;
	int m = 9;

	int n_1 = n & 1;
	int n_0 = n & 0;
	int m_1 = m & 1;
	int m_0 = m & 0;

	cout << n_1 << "\n"; // 0
	cout << n_0 << "\n"; // 0
	cout << "-----------\n";
	cout << m_1 << "\n"; // 1
	cout << m_0 << "\n"; // 0
	cout << "-----------\n";

	int x = 10;
	for (int i = 31; i >= 0; i--) {
		if (x&(1<<i)) cout << "1";
		else cout << "0";
	}

	cout << "\n";

	return 0;
}