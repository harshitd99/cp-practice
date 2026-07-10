#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;
    long long curr = 1;
    while (curr <= N) {
        cout << curr << " ";
        curr = curr * 2;
    }
    cout << "\n";

    return 0;
}