#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x;
    if (!(cin >> n >> m >> x)) return 0;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == x) {
                ans = true;
                break;
            }
        }
    }

    if (ans != false) {
        cout << "true\n";
    }
    else {
        cout << "false\n";

    }
    return 0;
}