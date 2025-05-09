#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int, int>;
using vi = vector<int>;

#define pb push_back
#define SZ(x) ((int)(x).size())
#define ALL(x) begin(x), end(x)
#define FOR(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define ROF(i, a, b) for (int i = (int)a - 1; i >= (int)b; --i)
#define ENDL '\n'

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    ll total = 1LL * n * (n + 1) / 2;
    if (total % 2 != 0) {
        cout<<"NO"<<ENDL;
        return 0;
    }

    ll target = total / 2;
    vi v1, v2;
    for (int i = n; i >= 1; --i) {
        if (target >= i) {
            v1.pb(i);
            target -= i;
        } else {
            v2.pb(i);
        }
    }

    cout << "YES" << ENDL;
    cout << v1.size() << ENDL;
    for (int x : v1) cout << x << " ";
    cout << ENDL;
    cout << v2.size() << ENDL;
    for (int x : v2) cout << x << " ";
    cout << ENDL;

    return 0;
}
