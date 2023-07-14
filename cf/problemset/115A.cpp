#include <bits/stdc++.h>
using namespace std;

class Vertex
{
public:
    int value;
    vector<Vertex> children;

    Vertex()
    {
        this->value = 0;
    }

    Vertex(int value)
    {
        this->value = value;
    }
};

int max_depth(Vertex r)
{
    int res = 0;
    for (Vertex x : r.children)
        return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    unordered_map<int, Vertex> m;
    vector<int> roots;

    for (int i = 1; i <= n; ++i)
    {
        int v;
        cin >> v;

        Vertex nv(i);
        m.insert(make_pair(i, nv));

        if (v == -1)
        {
            roots.push_back(i);
        }
        else
        {
            m[v].children.push_back(nv);
        }
    }

    for (pair<int, Vertex> p : m)
    {
        cout << "------------\n";
        cout << "vertex: " << p.second.value << "\n";
        for (Vertex i : p.second.children)
        {
            cout << i.value << " ";
        }
        cout << "\n------------\n";
    }

    return 0;
}