#include <bits/stdc++.h>

using namespace std;

void generate_subset_1(vector<int>& set, vector<vector<int>>& subsets, vector<int>& subset, int k) {
	if (k == set.size()) {
		subsets.push_back(subset);
	} else {
		generate_subset_1(set, subsets, subset, k + 1);
		subset.push_back(set[k]);
		generate_subset_1(set, subsets, subset, k + 1);
		subset.pop_back();
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> set {1, 2, 3};
	vector<int> subset;
	vector<vector<int>> subsets;

	generate_subset_1(set, subsets, subset, 0);

	for (vector<int> s : subsets) {
		for (int v : s) {
			cout << v << " - ";
		}

		cout << "\n";
	}

	return 0;
}