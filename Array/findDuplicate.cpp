#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
    // xor method
        // int ans = 0;
        // for (int i = 0; i < n; i++) {
        //     int x;
        //     cin >> x;
        //     ans ^= x;
        // }

    // simple technique:
        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = -1;

        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (a[i] == a[j]) {
                    count++;
                }
            }
            if (count == 2) {
                ans = a[i];
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}