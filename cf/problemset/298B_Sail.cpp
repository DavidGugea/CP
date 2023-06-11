#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll t, sx, sy, ex, ey;
	cin >> t >> sx >> sy >> ex >> ey;
	string s; cin >> s;

	int dx = sx-ex;
	bool need_east = false;
	bool need_west = false;

	if (dx < 0) {
		need_east = true;
	} else {
		need_west = true;
	}

	int dy = sy-ey;
	bool need_north = false;
	bool need_south = false;

	if (dy < 0) {
		// we need to go up;
		need_north = true;
	} else {
		need_south = true;
	}

	int res = -1;
	for (ll i = 0; i < s.size(); ++i) {
		if (sx != ex) {
			if (s[i] == 'E' && need_east) {
				sx += 1;
			} else if (s[i] == 'W' && need_west) {
				sx -= 1;
			}
		}

		if (sy != ey) {
			if (s[i] == 'N' && need_north) {
				sy += 1;
			} else if (s[i] == 'S' && need_south) {
				sy -= 1;
			}
		}

		if (sx == ex && sy == ey) {
			res = i+1;
			break;
		}
	}

	cout << res << "\n";

	return 0;
}