#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a; cin >> a;
	string b; cin >> b;

	for (int i = 0 ; i < a.size(); ++i) {
		a[i] = towlower(a[i]);
	}

	for (int i = 0 ; i < b.size(); ++i) {
		b[i] = towlower(b[i]);
	}

	if (a < b) {
		cout << "-1\n";
	} else if (b < a) {
		cout << "1\n";
	} else {
		cout << "0\n";
	}

	return 0;
}