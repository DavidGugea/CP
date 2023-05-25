#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;

	int lower = 0;
	int upper = 0;

	for (char c : s) {
		if (c == tolower(c))
			lower++;
		else
			upper++;
	}

	if (lower >= upper){
		for (char& c: s) {
			c = tolower(c);
		}
	} else if (upper > lower) {
		for (char& c: s) {
			c = toupper(c);
		}
	}

	cout << s << "\n";

	return 0;
}