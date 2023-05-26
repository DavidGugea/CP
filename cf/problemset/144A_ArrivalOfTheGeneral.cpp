#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int hidx = -1;
	int lidx = -1;

	int ht = 0;
	int lt = -1;;

	int n; cin >> n;
	for (int i = 0 ; i < n ; ++i) {
		int v; cin >> v;

		if (lt < v) {
			lt = v;
			lidx = i;
		}

		if (ht > v) {
			ht = v;
			hidx = i;
		}
	}

	cout << "ht: " << ht << "\n";
	cout << "lt: " << lt << "\n";
	cout << "hidx: " << hidx << "\n";
	cout << "lidx: " << lidx << "\n";

	return 0;
}