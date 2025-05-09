#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int, int>;
using vi = vector<int>;

#define pb push_back
#define SZ(x) ((int)(x).size())
#define ALL(x) rbegin(x), rend(x)
#define FOR(i, a, b) for (int i = (int)a; i <= (int)b; ++i)
#define ROF(i, a, b) for (int i = (int)a - 1; i >= (int)b; --i)
#define ENDL '\n'

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    if (n == 1) {
        cout<<1<<ENDL;
        return 0;
    }
    if (n == 2 || n == 3) {
        cout<<"NO SOLUTION"<<ENDL;
        return 0;
    }
    vi par;
    vi impar;
    FOR(i, 1, n) {
        i%2==0?par.pb(i):impar.pb(i);
    }
    if (n!=4) {
        sort(ALL(par));
        sort(ALL(impar));
    }

    for (int n : par) {
        cout<<n<<" ";
    }
    for (int n : impar) {
        cout<<n<<" ";
    }
    cout<<ENDL;

    return 0;
}