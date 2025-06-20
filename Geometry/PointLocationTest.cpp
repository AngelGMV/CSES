#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int, int>;
using vi = vector<int>;

#define pb push_back
#define FOR(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define ROF(i, a, b) for (int i = (int)a - 1; i >= (int)b; --i)

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        ll x1, y1, x2, y2, x3, y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        ll cross = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

        if (cross == 0) {
            cout << "TOUCH\n";
        } else if (cross > 0) {
            cout << "LEFT\n";
        } else {
            cout << "RIGHT\n";
        }
    }
    return 0;
}
