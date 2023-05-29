#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> f;
	int total = 0;
	int val;
	for (int i = 0 ; i < n; ++i){
		cin >> val;
		f.push_back(val);
		total += val;
	}
	
	int answer = 0;

	for (int i = 1; i <= 5; ++i)
    {
        if ((total + i) % (n + 1) != 1)
        {
            answer += 1;
        }
    }

	cout << answer << "\n";

	return 0;
}