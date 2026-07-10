#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    int Q;

    cin >> N >> Q;

    while (Q--) {
        int t, i;
        cin >> t >> i;

        long long mask = (1LL << i);

        switch (t) {
            case 1:
            cout << (N & mask ? "YES\n" : "NO\n");
            break;

            case 2:
            cout << (N |= mask) << '\n';
            break;

            case 3:
            cout << (N &= ~mask) << '\n';
            break;

            case 4:
            cout << (N ^= mask) << '\n';
            break;
        }

    }
    return 0;
}