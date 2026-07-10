#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector <long long> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    long long ans = 0;

    for (int bit = 0; bit < 64; bit++) {
        long long sum = 0;
        long long mask = (1LL << bit);
        
        for (int i = 0; i < N; i++) {
            if (a[i] & mask) {
                sum++;
            }
        }

        if (sum % 3 != 0) {
            ans = (ans | mask);
        }
    }
    cout << ans << '\n';

    return 0;
}