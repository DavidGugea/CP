#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int k; cin >> k;
	vector<int> nums;

	for (int i = 0; i < n; ++i) {
		int val; cin >> val;
		nums.push_back(val);
	}
	
	int res = 0;
	bool sorted = false;
	for (int i = 0; i < n*2; ++i) {
		int c = nums[k];
		nums.erase(nums.begin());
		nums.push_back(c);

		bool flag = true;
		for (int j = 0; j < nums.size()-1; ++j) {
			if (nums[j] != nums[j+1]) {
				flag = false;
				break;
			}
		}

		++res;

		if (flag) {
			sorted = true;
			cout << "sorted\n";
			break;
		}
	}

	if (sorted)
		cout << res << "\n";
	else
		cout << "-1\n";

	return 0;
}
