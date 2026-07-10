#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> cnt(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        if (cnt[i] == 0) {
            for (int j = i; j <= n; j += i) {
                cnt[j]++;
            }
        }
    }
    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if (cnt[i] == 2) {
            ans++;
        }
    }
    cout << ans << '\n'; 
    return 0;
}
