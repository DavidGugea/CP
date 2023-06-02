#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string a; cin >> a;
	string b; cin >> b;

	bool res = true;

	for (int i = 0; i < a.size(); ++i) {
		if (a[i] != b[b.size()-1-i]) {
			res = false;
			break;
		}
	}

	if (res) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}