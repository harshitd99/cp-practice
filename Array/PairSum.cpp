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
        vector<long long> a1(n);
        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }

        long long x;
        cin >> x;

        long long count = 0;
    
        // Check every pair (i, j) where i < j
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a1[i] + a1[j] == x) {
                    count++;
                }
            }
        }

        cout << count;
        cout << '\n';
    }

    return 0;
}