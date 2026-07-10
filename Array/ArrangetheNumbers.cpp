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

        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }

        for (int i = n - (n % 2); i >= 2; i -= 2) {
            cout << i << " ";
        }

        cout << '\n';
    }
    return 0;
}