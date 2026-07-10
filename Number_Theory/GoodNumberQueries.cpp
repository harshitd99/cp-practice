#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    const int n = 1e6;
// prime logic
    vector<bool> isPrime(n + 1, true);

    if (n >= 0) isPrime[0] = false;
    if (n >= 1) isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }    

// factor count
    vector<int> factors(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            factors[j]++;
        }
    }

// query processing
    while (q--) {
        int x;
        cin >>x;
        if (isPrime[factors[x]]) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}