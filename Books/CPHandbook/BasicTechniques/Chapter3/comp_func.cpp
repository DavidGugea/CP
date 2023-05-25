#include <bits/stdc++.h>

using namespace std;

void print_string_vector(vector<string>& t) {
	for (string s : t) {
		cout << s << " - ";	
	}

	cout << "\n";
}

bool comp(string a, string b) {
	if (a.size() != b.size()) return a.size() < b.size();
	return a < b;
}

int main(){
	int t;
	vector<string> sv;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;
		sv.push_back(s);
	}

	print_string_vector(sv);
	sort(sv.begin(), sv.end(), comp);
	print_string_vector(sv);

	return 1;
}