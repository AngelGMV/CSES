#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int, int>;
using vi = vector<int>;

#define pb push_back
#define FOR(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define ROF(i, a, b) for (int i = (int)a - 1; i >= (int)b; --i)

char findKthDigit(long long k) {
        if (k<=9) {
            return '0'+k;
        }
        long long digit_length = 1;
        long long count_in_block = 9;
        long long start = 1;

        while (k > digit_length * count_in_block) {
            k -= digit_length * count_in_block;
            digit_length++;
            count_in_block *= 10;
            start *= 10;
        }

        long long number = start + (k - 1) / digit_length;

        int digit_index = (k - 1) % digit_length;
        string num_str = to_string(number);
        return num_str[digit_index];
    }
signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int q;
    cin >> q;
    while (q--) {
        long long k;
        cin >> k;
        cout << findKthDigit(k) << "\n";
    }

    return 0;
}
