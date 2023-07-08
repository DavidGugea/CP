#include <bits/stdc++.h>
using namespace std;

int MAXN = 100'007;
int n, t[4 * MAXN];

void build(int[], int v, int tl, int tr)
{
    if (tl == tr)
    {
        // leaf node t[0..0] = a[0]
        // leaf node t[1..1] = a[0]
        // leaf node t[x..x] = a[x]
        t[v] = a[tl];
    }
    else
    {
        // build middle
        int tm = (tl + tr) / 2;

        // recursive -> left and right
        // indexing is 1 based and works like binary heap indexing
        build(a, v * 2, tl, tm);
        build(a, v * 2 + 1, tm + 1, tr);

        // sum both child vertices
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}

int sum(int v, int tl, int tr, int l, int r)
{
    if (l > r)
    {
        return 0;
    }

    if (l == tl && r == tr)
    {
        // find the right bounds
        return t[v];
    }

    int tm = (tl + tr) / 2;
    return sum(v * 2, tl, tm, l, min(r, tm)) + sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

void update(int v, int tl, int tr, int pos, int new_val)
{
    if (tl == tr)
    {
        t[v] = new_val;
    }
    else
    {
        int tm = (tl + tr) / 2;

        // send it right or send it left depending on the pos in a[pos]
        if (pos <= tm)
        {
            update(v * 2, tl, tm, pos, new_val);
        }
        else
        {
            update(v * 2 + 1, tm + 1, tr, pos, new_val);
        }

        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}