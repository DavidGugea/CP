#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	int h = 0;
	int e = 0;
	int l = 0;
	int o = 0;

	for (char c : s) {
		if (c == 'h') {
			++h;
		}

		if (c == 'e' && h >= 1) {
			++e;
		}

		if (c == 'l' && h >= 1 && e >= 1) {
			++l;
		}

		if (c == 'o' && h >= 1 && e >= 1 && l >= 2) {
			++o;
			break;
		}
	}

	if (h >= 1 && e >= 1 && l >= 2 && o >= 1) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}