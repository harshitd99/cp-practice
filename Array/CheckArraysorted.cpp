#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }


    bool flag = false;
    for (int i = 1; i < N; i++) {
        if (a[i] >= a[i - 1]) {

        }
        else {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
    }

    return 0;
}