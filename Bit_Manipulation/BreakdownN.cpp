#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;
    long long curr = 1;
    while (curr <= N) {
        curr = curr * 2;
    }
    curr /= 2;

    while (N > 0) {
        if (curr <= N) {
            cout << curr << " ";
            N -= curr;
        }
        curr /= 2;
    }

    return 0;
}