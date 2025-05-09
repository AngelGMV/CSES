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

    ll n, actual=0, anterior=0, count=0;
    cin>>n;

    FOR(i, 0, n) {
        cin>>actual;
        actual<anterior ? (count += anterior-actual) : (anterior = actual);
    }
    cout<<count<<ENDL;

  return 0;
}