#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int a[N];
    for (int i = 0; i <= N-1; i++) {
        cin >> a[i];
    }

    int ans = a[0], location = 1;
    for (int i = 1; i < N; i++) {
        if (a[i] < ans) {
            ans = a[i];
            location = i + 1;
        }
    }
    cout << ans <<" " << location << '\n';

    return 0;
}