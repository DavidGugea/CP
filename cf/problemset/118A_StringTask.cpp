#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;

	string tmp = "";

	for (char c : s) {
		if (c != 'A' && c != 'a' && c != 'O' && c != 'o' && c != 'E' && c != 'e' && c != 'I' && c != 'i' && c != 'U' && c != 'u' && c != 'Y' && c != 'y') {
			char ins = tolower(c);
			tmp += '.';
			tmp += ins;
		}
	}

	cout << tmp << "\n";

	return 0;
}