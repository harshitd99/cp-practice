#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int target;
    cin >> target;

    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    bool flag = false;
    for (int i = 0; i < N; i++) {
        if (a[i] == target) {
            flag = true;
        }
    }

    if (flag) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    
    return 0;
}