#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    char act = 0;
    int aux=0, max = 0;
    cin >> s;
    for (const char c : s) {
        if (act==0) {
            act = c;
        }
        if (act==c) {
            aux++;
        }else {
            act=c;
            aux=1;
        }
        if (aux>max) {
            max=aux;
        }
    }
    cout<<max<<endl;

}