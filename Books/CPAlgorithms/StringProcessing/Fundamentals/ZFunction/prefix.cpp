#include <bits/stdc++.h>
using namespace std;

vector<int> z_function_trivial(string s)
{
    int n = s.size();
    vector<int> z(n);
    for (int i = 1; i < n; i++)
    {
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
        {
            z[i]++;
        }
    }
    return z;
}