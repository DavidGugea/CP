#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a, b, c, s;
	cin >> a >> b >> c;

	s = a + b;
	sort(s.begin(), s.end());
	sort(c.begin(), c.end());

	if (s == c)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}