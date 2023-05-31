#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int val;
	int first = 0;
	int last = 0;
	int a = 0, b=0;
	int diff = INT_MAX;

	for (int i = 0 ; i < n; ++i) {
		cin >> val;

		if (i == 0) {
			first = val;
			last = val;
		} else {
			int cdiff = abs(val - last);
			if (cdiff < diff) {
				b = i;
				a = i-1;

				diff = cdiff;
			}

			if (i == n-1) {
				cdiff = abs(val-first);

				if (cdiff < diff) {
					b = n-1;
					a = 0;

					cdiff = diff;
					break;
				}
			}

			last = val;
		}
	}

	cout << a + 1 << " " << b + 1 << "\n";

	return 0;
}
