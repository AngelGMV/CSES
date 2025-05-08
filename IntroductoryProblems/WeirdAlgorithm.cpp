#include "iostream"
using namespace std;

void wa(long long n) {
    if (n == 1) {
        cout<<endl;
        return;
    }
    if (n%2 == 0) {
        n/=2;
        cout<<n<<" ";
        wa(n);
    }else {
        n = (n*3)+1;
        cout<<n<<" ";
        wa(n);
    }
}

int main() {
    long long n;
    cin>>n;
    if (n==1) {
        cout<<n<<endl;
        return 0;
    }
    cout<<n<<" ";
    wa(n);
}