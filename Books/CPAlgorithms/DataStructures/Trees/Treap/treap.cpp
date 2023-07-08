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