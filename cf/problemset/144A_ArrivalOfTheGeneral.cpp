#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;

	int lidx = 0;
	int hidx = 0;

	int l; cin >> l;
	int h = l;

	for (int i = 1 ; i < n; ++i) {
		int v; cin >> v;

		if (v > h) {
			h = v;
			hidx = i;
		}

		if (v <= l) {
			l = v;
			lidx = i;
		}
	}

	int res = 0;
	res += abs(n-1-lidx);
	res += abs(hidx);

	if (hidx > lidx) {
		res -= 1;
	}

	cout << res << "\n";

	return 0;
}