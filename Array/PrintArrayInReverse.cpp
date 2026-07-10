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
    
    for (int i = N-1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;
}