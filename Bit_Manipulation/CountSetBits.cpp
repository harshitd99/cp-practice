#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    int count = 0;
    while (n != 0) {
        count++;
        n = n & (n - 1);
    }
    cout << count << '\n';
    return 0;
}