#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    const int n = 1e6;

    int spf[n + 1];
    for (int i = 2; i <= n; i++) {
        spf[i] = i;
    }
    for (int i = 2; i * i <= n; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= n; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
    while (q--) {
        int x;
        cin >> x;
        map <int, int> freq;
        while (x != 1) {
            freq[spf[x]]++;
            x /= spf[x];
        }
        for (auto it : freq) {
            cout << it.first << "^" << it.second << " ";
        }
        cout << '\n';
    }
    return 0;
}
