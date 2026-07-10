#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;

    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }

    string binary = "";
    while (N > 0) {
        binary += (N % 2) + '0';
        N /= 2;
    }

    reverse(binary.begin(), binary.end());
    cout << binary << "\n";

    return 0;
}