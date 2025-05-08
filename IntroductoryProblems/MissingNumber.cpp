#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<char> v(n,false);
    for (int i = 0; i <(n-1); i++) {
        int x;
        cin>>x;
        v[(x-1)] = true;
    }
    auto it = find(v.begin(), v.end(), false);
    cout << (it - v.begin())+1;
}