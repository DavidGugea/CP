#include <bits/stdc++.h>
using namespace std;

class DisjointSetUnion
{
public:
    unordered_map<int, int> parent;
    unordered_map<int, int> size;

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
        {
            return v;
        }

        return parent[v] = find_set(parent[v]);
    }

    void union_sets(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);

        if (size[a] < size[b])
        {
            swap(a, b);
        }

        parent[b] = a;
        size[a] += size[b];
    }

    int x()
    {
        // get number of sets in the dsu that have more than one element.
        int res = 0;
        for (pair<int, int> p : parent)
        {
            if (p.first == p.second && size[p.first] > 1)
            {
                ++res;
            }
        }
        return res;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int nolang = 0;

    DisjointSetUnion dsu;
    unordered_map<int, int> hm;

    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;
        dsu.make_set(i);

        if (k == 0)
        {
            nolang++;
        }

        for (int j = 0; j < k; ++j)
        {
            int l;
            cin >> l;
            auto it = hm.find(l);

            if (it == hm.end())
            {
                hm.insert(make_pair(l, i));
            }
            else
            {
                dsu.union_sets(hm[l], i);
            }
        }
    }

    int a = dsu.x();
    int res = 0;
    if (a == 0)
    {
        if (nolang == n)
        {
            res = nolang;
        }
        else
        {
            res = n - 1;
        }
    }
    else
    {
        res = dsu.x() + nolang - 1;
    }

    cout << res << "\n";

    return 0;
}