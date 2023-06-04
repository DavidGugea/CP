#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;

	int t = 0;
	for (int i = 0 ; i < s.size() - 1; ++i) {
		if (s[i] == s[i+1]) {
			++t;
			if (t == 6) {
				cout << "YES\n";
				return 0;
			}
		} else {
			t = 0;
		}
	}

	cout << "NO\n";

	return 0;
}