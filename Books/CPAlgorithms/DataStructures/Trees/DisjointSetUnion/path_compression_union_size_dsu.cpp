#include <bits/stdc++.h>
using namespace std;

class DisjointSetUnion
{
private:
    unordered_map<int, int> parent;
    unordered_map<int, int> size;

public:
    void make_set(int v)
    {
        auto it = parent.find(v);

        if (it == parent.end())
        {
            parent.insert(make_pair(v, v));
            size.insert(make_pair(v, 1));
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

        if (size[a] < size[b])
            swap(a, b);

        parent[b] = a;
        size[a] += size[b];
    }
}