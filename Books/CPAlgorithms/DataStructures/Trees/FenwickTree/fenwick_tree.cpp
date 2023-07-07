#include <bits/stdc++.h>
using namespace std;

struct FenwickTree
{
    vector<int> bit;
    int n;

    FenwickTree(int n)
    {
        this->n = n;
        bit.assign(n, 0);
    }

    FenwickTree(vector<int> a)
    {
        bit = a;

        for (size_t i = 0; i < a.size(); ++i)
        {
            int parent = i + lsb(i);
            if (parent < n)
            {
                bit[parent] += bit[i];
            }
        }
    }

    int lsb(int n)
    {
        // least significant bit
        return n & (-n);
    }

    int sum(int r)
    {
        int ret = 0;
        for (; r >= 0; r =)
        {
            ret += bit[i];
            i -= this->lsb(i);
        }
        return ret;
    }

    int sum(int l, int r)
    {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta)
    {
        while (i < n)
        {
            bit[i] += delta;
            i += lsb(i);
        }
    }
}

int
main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}