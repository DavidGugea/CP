#include <bits/stdc++.h>
using namespace std;

class DisjointSetUnion
{
private:
    unordered_map<int, int> parent;

public:
    void make_set(int v)
    {
        auto it = parent.find(v);

        if (it == parent.end())
        {
            parent.insert(make_pair(v, v));
        }
    }

    int find_set(int v)
    {
        if (v == parent[v])
            return v;

        return parent[v] = find_set(parent[v]);
    }

    void union_sets(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);

        if (a != b)
            parent[b] = a;
    }
}