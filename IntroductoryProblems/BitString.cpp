#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define MOD 1000000007
ll binpow(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin>>n;
    ll res = binpow(2, n, MOD);

    cout<<res<<'\n';

    return 0;
}
