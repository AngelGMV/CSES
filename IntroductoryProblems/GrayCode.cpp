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

void convertir(int n, int base) {
    if(n < 0) return;
    if(n < base)
        printf("%d", n);
    else {
        convertir(n / base, base);
        printf("%d", n % base);
    }
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin >> n;
    vi v(n,0);
    for (int i=0; i<=pow(2,n); i*=2) {

        if (i==0) i++;
    }
    return 0;
}