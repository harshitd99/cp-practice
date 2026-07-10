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

        int m;
        cin >> m;
        vector<long long> a2(m);
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }     

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a1[i] == a2[j]) {
                    cout << a1 [i] << " ";
                    a2[j] = -1; // Mark as used (assuming non-negative inputs)
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}