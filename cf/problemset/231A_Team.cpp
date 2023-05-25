#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	int res = 0;
	while (t--) {
		int a; cin >> a;
		int b; cin >> b;
		int c; cin >> c;

		if (a + b + c >= 2)
			++res;
	}

	cout << res << "\n";

	return 0;
}