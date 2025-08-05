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
    int n, x;
    map<int, int> mp;
    cin>>n;
    FOR(i, 0, n) {
        cin>>x;
        mp[x]++;
    }
    cout<<mp.size()<<endl;

    return 0;
}
