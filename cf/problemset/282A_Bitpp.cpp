#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int x = 0;

	for (int i = 0 ; i < n; ++i) {
		string s; cin >> s;
		if (s[0] == '+' || s == "X++") {
			++x;
		} else {
			--x;
		}
	}

	cout << x << "\n";

	return 0;
}
