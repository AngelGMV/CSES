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

    ll t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if ((a + b) % 3 != 0 || min(a, b) * 2 < max(a, b)) {
            cout<<"NO"<<ENDL;
        } else {
            cout<<"YES"<<ENDL;
        }
    }
    return 0;
}
