#include <bits/stdc++.h>
 
typedef long double LD;
typedef long long LL;
 
using namespace std;
 
#define sz(A) (int)(A).size()
#define mp make_pair
#define pb push_back
 
const int N = int(1e5 + 3);
 
int n, m, pos[N];
 
int main() {
    cin >> n;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        pos[num] = i + 1;
    }   
 
    LL sum1 = 0, sum2 = 0;

    int q;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> q;
        sum1 += pos[q];
        sum2 += n - pos[q] + 1;             
    }
 
    cout << sum1 << " " << sum2 << "\n";
 
    return 0;
}