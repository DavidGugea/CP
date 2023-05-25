#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	int at = 0, bt = 0, ct = 0;
	int a, b, c;

	while (t--) {
		cin >> a >> b >> c;
		at += a;
		bt += b;
		ct += c;
	}

	if (at == 0 && bt == 0 && ct == 0) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}