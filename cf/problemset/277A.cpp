#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class DisjointSetUnion
{
public:
    unordered_map<ll, ll> parent;
    unordered_map<ll, ll> size;

    void make_set(int v)
    {
        auto it = parent.find(v);

        if (it == parent.end())
        {
            parent.insert(make_pair(v, v));
            size.insert(make_pair(v, 1));
        }
    }

    ll find_set(ll v)
    {
        if (v == parent[v])
        {
            return v;
        }

        return parent[v] = find_set(parent[v]);
    }

    void union_set(ll a, ll b)
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

    ll csq()
    {
        ll res = 0;

        for (pair<ll, ll> p : parent)
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

    DisjointSetUnion dsu;
    int no_lang = 0;
    unordered_map<ll, ll> l;
    vector<ll> used;
    ll n, m;
    cin >> n >> m;

    for (ll i = 0; i < n; ++i)
    {
        ll k;
        cin >> k;

        if (k == 0)
        {
            ++no_lang;
            continue;
        }

        dsu.make_set(i);
        used.push_back(i);

        for (ll j = 0; j < k; ++j)
        {
            ll lang;
            cin >> lang;

            auto it = l.find(lang);

            if (it == l.end())
            {
                l.insert(make_pair(lang, i));
            }
            else
            {
                dsu.union_set(i, l[lang]);
            }
        }
    }

    /*
    cout << "-------------------\n";
    for (int i = 0; i < n; ++i)
    {
        cout << i << ": parent: " << dsu.parent[i] << "| size: " << dsu.size[i] << "\n";
    }
    cout << "-------------------\n";
    */

    ll csq = dsu.csq();
    ll sc = 0;
    for (ll i : used)
    {
        if (dsu.size[i] == 1 && dsu.parent[i] == i)
        {
            sc++;
        }
    }

    /*
    cout << "no_lang: " << no_lang << "\n";
    cout << "components of dsu with more than 1 elements: " << csq << "\n";
    cout << "amount of 1 element components " << sc << "\n";
    */

    ll res = 0;

    if (csq == 0 && sc == 0)
    {
        res = no_lang;
    }
    else
    {
        res = csq + sc + no_lang - 1;
    }

    cout << res << "\n";

    return 0;
}