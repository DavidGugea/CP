#include <bits/stdc++.h>
using namespace std;

class DisjointSetUnion
{
private:
    unordered_map<int, int> parent;
    unordered_map<int, int> size;

public:
    make_set(int n)
    {
        auto it = parent.find(n);

        if (it == parent.end())
        {
            parent.insert(make_pair(n, n));
            size.insert(make_pair(n, 1));
        }
        else
        {
            cout << "Already in the DSU\n";
        }
    }

    int find_set(int n)
    {
        if (n == parent[n])
            return n;

        return find_set(parent[n]);
    }

    void union_sets(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);
        if (a != b)
        {
            parent[b] = parent[a];
        }
    }
}