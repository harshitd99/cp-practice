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
    
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (a1[i] + a1[j] + a1[k] == x) {
                    count++;
                }
            }
        }
    }
        cout << count;
        cout << '\n';
    }

    return 0;
}