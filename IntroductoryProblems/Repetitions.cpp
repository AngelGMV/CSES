#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    unordered_map<char, int> mapa;
    cin >> s;
    for (char c : s) {
        mapa[c]++;
    }
    int max_valor = INT_MIN;
    for (auto& par : mapa) {
        max_valor = max(max_valor, par.second);
    }
    cout<<max_valor<<endl;

}