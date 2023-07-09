#include <bits/stdc++.h>
using namespace std;

int C(int n, int k)
{
    int res = 1;
    for (int i = n - k + 1; i <= n; ++i)
    {
        res *= i;
    }
    for (int i = 2; i <= k; ++i)
    {
        res /= i;
    }

    return res;
}

int C_optimized(int n, int k)
{
    double res = 1;
    for (int i = 1; i <= k; ++i)
        res = res * (n - k + i) / i;
    return (int)(res + 0.01);
}