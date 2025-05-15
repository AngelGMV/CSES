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

int countTrailingZeros(int n ) {
    int count = 0;
    if (n < 0) return -1;
    for (int i = 5; n/i >= 1; i*=5) {
        count += n/i;
    }
    return count;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, res;
    cin >> n;

    res= countTrailingZeros(n);
    cout << res;


    return 0;
}
