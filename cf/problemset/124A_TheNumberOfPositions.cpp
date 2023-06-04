#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int a; cin >> a;
	int b; cin >> b;

	int res = n - max(a + 1, n - b) + 1;

	cout << res << "\n";

	return 0;
}