#include <bits/stdc++.h>
using namespace std;

const int K = 26;

struct Vertex
{
    int next[K];
    bool output = false;

    Vertex()
    {
        fill(begin(next), end(next), -1);
    }
};

vector<Vertex> trie(1);

void add_string(string const &s)
{
    int v = 0;
    for (char ch : s)
    {
        int c = ch - 'a';
        if (trie[v].enxt[c] == -1)
        {
            trie[v].enxt[c] = trie.size();
            trie.emplace_back();
        }

        v = trie[v].next[c];
    }

    trie[v].output = true;
}