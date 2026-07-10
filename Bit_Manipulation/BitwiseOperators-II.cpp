#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unsigned long long x;
    cin >> x;

    unsigned long long AND_res = x;
    unsigned long long OR_res = x;
    unsigned long long XOR_res = x;

    for (int i = 1; i < n; i++) {
        cin >> x;
        AND_res &= x;
        OR_res |= x;
        XOR_res ^= x;
    }

    cout << AND_res << " " << OR_res << " " << XOR_res << "\n";

    return 0;
}