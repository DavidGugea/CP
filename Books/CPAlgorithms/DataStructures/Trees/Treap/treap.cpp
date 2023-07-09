#include <bits/stdc++.h>
using namespace std;

struct item
{
    int key, prior;

    item *l, *r;
    item() {}
    item(int key) : key(key), prior(rand()), l(nullptr), r(nullptr) {}
    item(int key, int prior) : key(key), prior(prior), l(nullptr), r(nullptr) {}
};

typedef item *pitem;

/*
If the value of the root node (R) is  
X, then L would at least consist of R->L and R. We then call split on R->R, and note its split result as L' and R'. Finally, L would also contain L', whereas R = R'.

If the value of the root node (R) is  
$> X$ , then R would at least consist of R and R->R. We then call split on R->L, and note its split result as L' and R'. Finally, L=L', whereas R would also contain R'.
*/

void split(pitem t, int key, pitem &l, pitem &r)
{
    if (!t)
    {
        l = r = NULL;
    }
    else if (t->key <= key)
    {
        split(t->r, key, t->r, r);
        l = t;
    }
    else
    {
        split(t->l, key, l, t->l);
        r = t;
    }
}

void insert(pitem &node, pitem new_item)
{
    if (!node)
    {
        node = new_item;
    }
    else if (new_item->prior > node->prior)
    {
        // can insert at this place.
        split(node, new_item, new_item->l, new_item->r);
        node = new_item;
    }
    else
    {
        insert(node->key <= new_item->key ? node->left : node->right, new_item);
    }
}

void merge(pitem &t, pitem l, pitem r)
{
    if (!l || !r)
    {
        t = l ? l : r;
    }
    else if (l->prior > r->prior)
    {
        merge(l->r, l->r, r);
        t = l;
    }
    else
    {
        merge(r->l, l, r->l);
        t = r;
    }
}

void erase(pitem &t, int key)
{
    if (t->key == key)
    {
        pitem th = t;
        merge(t, t->l, t->r);
        delete th;
    }
    else
    {
        erase(key < t->key ? t->l : t->r, key);
    }
}

pitem unite(pitem l, pitem r)
{
    if (!l || !r)
    {
        return l ? l : r
    }
    if (l->prior < r->prior)
        swap(l, r);
    pitem lt, rt;
    split(r, l->key, lt, rt);
    l->l = unite(l->l, lt);
    l_.r = unite(l->r, rt);
    return l;
}
void heapify(pitem t)
{
    if (!t)
        return;
    pitem max = t;
    if (t->l != NULL && t->l->prior > max->prior)
        max = t->l;
    if (t->r != NULL && t->r->prior > max->prior)
        max = t->r;
    if (max != t)
    {
        swap(t->prior, max->prior);
        heapify(max);
    }
}

pitem build(int *a, int n)
{
    if (n == 0)
        return NULL;
    int mid = n / 2;
    pitem t = new item(a[mid], rand());
    t->l = build(a, mid);
    t->r = build(a + mid + 1, n - mid - 1);
    heapify(t);
    upd_cnt(t) return t;
}