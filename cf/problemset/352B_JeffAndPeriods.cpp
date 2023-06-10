#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	unordered_map<int, vector<int>> mp;
	for (int i = 0; i < n; ++i) {
		int val; cin >> val;
		auto it = mp.find(val);
		if (it == mp.end()) {
			vector<int> nv {i};
			mp.insert(make_pair(val, vector<int>{i}));
		} else {
			mp[val].push_back(i);
		}
	}

	vector<pair<int, int>> res;
	for (pair<int, vector<int>> pii : mp) {
		if (pii.second.size() == 1) {
			res.push_back(make_pair(pii.first, 0));
			continue;
		}

		bool flag = true;

		int interval = pii.second[1] - pii.second[0];
		for (int i = 1; i < pii.second.size()-1; ++i) {
			int a = pii.second[i];
			int b = pii.second[i+1];

			if ((b-a) != interval) {
				flag = false;
				break;
			}
		}

		if (flag == true) {
			res.push_back(make_pair(pii.first, interval));
		}
	}

	sort(res.begin(), res.end());
	cout << res.size() << "\n";
	for (pair<int, int> pii : res) {
		cout << pii.first << " " << pii.second << "\n";
	}

	return 0;
}