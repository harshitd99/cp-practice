#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    cin >> N;

    unsigned long long decimal = 0;

    for (char bit : N) {
        decimal =  decimal * 2 + (bit - '0');
    }
    
    cout << decimal << "\n";

    return 0;
}